/*
 * Copyright (c) 2014 MediaTek Inc.
 * Author: James Liao <jamesjj.liao@mediatek.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <linux/of.h>
#include <linux/of_address.h>

#include <linux/io.h>
#include <linux/slab.h>
#include <linux/delay.h>
#include <linux/clkdev.h>

#include "clk-mtk.h"
#include "clk-gate.h"

#if defined(CONFIG_MACH_MT6763)
/*#define MT_CCF_BRINGUP  1*/
#elif defined(CONFIG_MACH_MT6759)
/*#define MT_CCF_BRINGUP*/
#elif defined(CONFIG_MACH_MT6758)
/*#define MT_CCF_BRINGUP*/
#elif defined(CONFIG_MACH_MT6739)
/*#define MT_CCF_BRINGUP*/
#elif defined(CONFIG_MACH_MT6771)
/*#define MT_CCF_BRINGUP*/
#elif defined(CONFIG_MACH_MT6775)
#define MT_CCF_BRINGUP
#endif

#ifdef MT_CCF_BRINGUP
static int mtk_cg_enabled_dummy(struct clk_hw *hw)
{
	return 1;
}

static int mtk_cg_enable_dummy(struct clk_hw *hw)
{
	return 0;
}

static void mtk_cg_disable_dummy(struct clk_hw *hw)
{
}

static int mtk_cg_enable_inv_dummy(struct clk_hw *hw)
{
	return 0;
}

static void mtk_cg_disable_inv_dummy(struct clk_hw *hw)
{
}
#else
static int mtk_cg_bit_is_cleared(struct clk_hw *hw)
{
	struct mtk_clk_gate *cg = to_clk_gate(hw);
	u32 val = 0;

	regmap_read(cg->regmap, cg->sta_ofs, &val);

	val &= BIT(cg->bit);

	return val == 0;
}

static int mtk_cg_bit_is_set(struct clk_hw *hw)
{
	struct mtk_clk_gate *cg = to_clk_gate(hw);
	u32 val = 0;

	regmap_read(cg->regmap, cg->sta_ofs, &val);

	val &= BIT(cg->bit);

	return val != 0;
}

static void mtk_cg_set_bit(struct clk_hw *hw)
{
	struct mtk_clk_gate *cg = to_clk_gate(hw);

	regmap_write(cg->regmap, cg->set_ofs, BIT(cg->bit));
}

static void mtk_cg_clr_bit(struct clk_hw *hw)
{
	struct mtk_clk_gate *cg = to_clk_gate(hw);

	regmap_write(cg->regmap, cg->clr_ofs, BIT(cg->bit));
}

static int mtk_cg_enable(struct clk_hw *hw)
{
	mtk_cg_clr_bit(hw);

	return 0;
}

static void mtk_cg_disable(struct clk_hw *hw)
{
	mtk_cg_set_bit(hw);
}

static int mtk_cg_enable_inv(struct clk_hw *hw)
{
	mtk_cg_set_bit(hw);

	return 0;
}

static void mtk_cg_disable_inv(struct clk_hw *hw)
{
	mtk_cg_clr_bit(hw);
}
#endif

#ifdef MT_CCF_BRINGUP
const struct clk_ops mtk_clk_gate_ops_setclr = {
	.is_enabled	= mtk_cg_enabled_dummy,
	.enable		= mtk_cg_enable_dummy,
	.disable	= mtk_cg_disable_dummy,
};

const struct clk_ops mtk_clk_gate_ops_setclr_inv = {
	.is_enabled	= mtk_cg_enabled_dummy,
	.enable		= mtk_cg_enable_inv_dummy,
	.disable	= mtk_cg_disable_inv_dummy,
};
#else
const struct clk_ops mtk_clk_gate_ops_setclr = {
	.is_enabled	= mtk_cg_bit_is_cleared,
	.enable		= mtk_cg_enable,
	.disable	= mtk_cg_disable,
};

const struct clk_ops mtk_clk_gate_ops_setclr_inv = {
	.is_enabled	= mtk_cg_bit_is_set,
	.enable		= mtk_cg_enable_inv,
	.disable	= mtk_cg_disable_inv,
};
#endif

struct clk * __init mtk_clk_register_gate(
		const char *name,
		const char *parent_name,
		struct regmap *regmap,
		int set_ofs,
		int clr_ofs,
		int sta_ofs,
		u8 bit,
		const struct clk_ops *ops)
{
	struct mtk_clk_gate *cg;
	struct clk *clk;
	struct clk_init_data init = {};

	cg = kzalloc(sizeof(*cg), GFP_KERNEL);
	if (!cg)
		return ERR_PTR(-ENOMEM);

	init.name = name;
	init.flags = CLK_SET_RATE_PARENT;
	init.parent_names = parent_name ? &parent_name : NULL;
	init.num_parents = parent_name ? 1 : 0;
	init.ops = ops;

	cg->regmap = regmap;
	cg->set_ofs = set_ofs;
	cg->clr_ofs = clr_ofs;
	cg->sta_ofs = sta_ofs;
	cg->bit = bit;

	cg->hw.init = &init;

	clk = clk_register(NULL, &cg->hw);
	if (IS_ERR(clk))
		kfree(cg);

	return clk;
}
