/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef CMDQ_EVENT_COMMON
#define CMDQ_EVENT_COMMON

/* Define CMDQ events
 *
 * For hardware event must define in device tree.
 * For SW event assign event ID here directly.
 *
 * Note: event name must sync to cmdq_events table in cmdq_event_common.c
 */
enum CMDQ_EVENT_ENUM {
	/* MDP start frame */
	CMDQ_EVENT_MDP_RDMA0_SOF,
	CMDQ_EVENT_MDP_RDMA1_SOF,
	CMDQ_EVENT_MDP_RSZ0_SOF,
	CMDQ_EVENT_MDP_RSZ1_SOF,
	CMDQ_EVENT_MDP_RSZ2_SOF,
	CMDQ_EVENT_MDP_TDSHP_SOF,
	CMDQ_EVENT_MDP_TDSHP0_SOF,
	CMDQ_EVENT_MDP_TDSHP1_SOF,
	CMDQ_EVENT_MDP_WDMA_SOF,
	CMDQ_EVENT_MDP_WROT_SOF,
	CMDQ_EVENT_MDP_WROT0_SOF,
	CMDQ_EVENT_MDP_WROT1_SOF,
	CMDQ_EVENT_MDP_COLOR_SOF,
	CMDQ_EVENT_MDP_MVW_SOF,
	CMDQ_EVENT_MDP_CROP_SOF,

	/* Display start frame */
	CMDQ_EVENT_DISP_OVL0_SOF,
	CMDQ_EVENT_DISP_OVL1_SOF,
	CMDQ_EVENT_DISP_2L_OVL0_SOF,
	CMDQ_EVENT_DISP_2L_OVL1_SOF,
	CMDQ_EVENT_DISP_RDMA0_SOF,
	CMDQ_EVENT_DISP_RDMA1_SOF,
	CMDQ_EVENT_DISP_RDMA2_SOF,
	CMDQ_EVENT_DISP_WDMA0_SOF,
	CMDQ_EVENT_DISP_WDMA1_SOF,
	CMDQ_EVENT_DISP_COLOR_SOF,
	CMDQ_EVENT_DISP_COLOR0_SOF,
	CMDQ_EVENT_DISP_COLOR1_SOF,
	CMDQ_EVENT_DISP_CCORR_SOF,
	CMDQ_EVENT_DISP_CCORR0_SOF,
	CMDQ_EVENT_DISP_CCORR1_SOF,
	CMDQ_EVENT_DISP_AAL_SOF,
	CMDQ_EVENT_DISP_AAL0_SOF,
	CMDQ_EVENT_DISP_AAL1_SOF,
	CMDQ_EVENT_DISP_GAMMA_SOF,
	CMDQ_EVENT_DISP_GAMMA0_SOF,
	CMDQ_EVENT_DISP_GAMMA1_SOF,
	CMDQ_EVENT_DISP_DITHER_SOF,
	CMDQ_EVENT_DISP_DITHER0_SOF,
	CMDQ_EVENT_DISP_DITHER1_SOF,
	CMDQ_EVENT_DISP_UFOE_SOF,
	CMDQ_EVENT_DISP_PWM0_SOF,
	CMDQ_EVENT_DISP_PWM1_SOF,
	CMDQ_EVENT_DISP_OD_SOF,
	CMDQ_EVENT_DISP_DSC_SOF,

	CMDQ_EVENT_UFOD_RAMA0_L0_SOF,
	CMDQ_EVENT_UFOD_RAMA0_L1_SOF,
	CMDQ_EVENT_UFOD_RAMA0_L2_SOF,
	CMDQ_EVENT_UFOD_RAMA0_L3_SOF,
	CMDQ_EVENT_UFOD_RAMA1_L0_SOF,
	CMDQ_EVENT_UFOD_RAMA1_L1_SOF,
	CMDQ_EVENT_UFOD_RAMA1_L2_SOF,
	CMDQ_EVENT_UFOD_RAMA1_L3_SOF,

	/* MDP frame done */
	CMDQ_EVENT_MDP_RDMA0_EOF,
	CMDQ_EVENT_MDP_RDMA1_EOF,
	CMDQ_EVENT_MDP_RSZ0_EOF,
	CMDQ_EVENT_MDP_RSZ1_EOF,
	CMDQ_EVENT_MDP_RSZ2_EOF,
	CMDQ_EVENT_MDP_TDSHP_EOF,
	CMDQ_EVENT_MDP_TDSHP0_EOF,
	CMDQ_EVENT_MDP_TDSHP1_EOF,
	CMDQ_EVENT_MDP_WDMA_EOF,
	CMDQ_EVENT_MDP_WROT_WRITE_EOF,
	CMDQ_EVENT_MDP_WROT_READ_EOF,
	CMDQ_EVENT_MDP_WROT0_WRITE_EOF,
	CMDQ_EVENT_MDP_WROT0_READ_EOF,
	CMDQ_EVENT_MDP_WROT1_WRITE_EOF,
	CMDQ_EVENT_MDP_WROT1_READ_EOF,
	CMDQ_EVENT_MDP_WROT0_W_EOF,
	CMDQ_EVENT_MDP_WROT0_R_EOF,
	CMDQ_EVENT_MDP_WROT1_W_EOF,
	CMDQ_EVENT_MDP_WROT1_R_EOF,
	CMDQ_EVENT_MDP_COLOR_EOF,
	CMDQ_EVENT_MDP_CROP_EOF,

	/* Display frame done */
	CMDQ_EVENT_DISP_OVL0_EOF,
	CMDQ_EVENT_DISP_OVL1_EOF,
	CMDQ_EVENT_DISP_2L_OVL0_EOF,
	CMDQ_EVENT_DISP_2L_OVL1_EOF,
	CMDQ_EVENT_DISP_RDMA0_EOF,
	CMDQ_EVENT_DISP_RDMA1_EOF,
	CMDQ_EVENT_DISP_RDMA2_EOF,
	CMDQ_EVENT_DISP_WDMA0_EOF,
	CMDQ_EVENT_DISP_WDMA1_EOF,
	CMDQ_EVENT_DISP_COLOR_EOF,
	CMDQ_EVENT_DISP_COLOR0_EOF,
	CMDQ_EVENT_DISP_COLOR1_EOF,
	CMDQ_EVENT_DISP_CCORR_EOF,
	CMDQ_EVENT_DISP_CCORR0_EOF,
	CMDQ_EVENT_DISP_CCORR1_EOF,
	CMDQ_EVENT_DISP_AAL_EOF,
	CMDQ_EVENT_DISP_AAL0_EOF,
	CMDQ_EVENT_DISP_AAL1_EOF,
	CMDQ_EVENT_DISP_GAMMA_EOF,
	CMDQ_EVENT_DISP_GAMMA0_EOF,
	CMDQ_EVENT_DISP_GAMMA1_EOF,
	CMDQ_EVENT_DISP_DITHER_EOF,
	CMDQ_EVENT_DISP_DITHER0_EOF,
	CMDQ_EVENT_DISP_DITHER1_EOF,
	CMDQ_EVENT_DISP_UFOE_EOF,
	CMDQ_EVENT_DISP_OD_EOF,
	CMDQ_EVENT_DISP_OD_RDMA_EOF,
	CMDQ_EVENT_DISP_OD_WDMA_EOF,
	CMDQ_EVENT_DISP_DSC_EOF,
	CMDQ_EVENT_DISP_DSI0_EOF,
	CMDQ_EVENT_DISP_DSI1_EOF,
	CMDQ_EVENT_DISP_DPI0_EOF,

	CMDQ_EVENT_UFOD_RAMA0_L0_EOF,
	CMDQ_EVENT_UFOD_RAMA0_L1_EOF,
	CMDQ_EVENT_UFOD_RAMA0_L2_EOF,
	CMDQ_EVENT_UFOD_RAMA0_L3_EOF,
	CMDQ_EVENT_UFOD_RAMA1_L0_EOF,
	CMDQ_EVENT_UFOD_RAMA1_L1_EOF,
	CMDQ_EVENT_UFOD_RAMA1_L2_EOF,
	CMDQ_EVENT_UFOD_RAMA1_L3_EOF,

	/* Mutex frame done */
	/* DISPSYS */
	CMDQ_EVENT_MUTEX0_STREAM_EOF,
	/* DISPSYS */
	CMDQ_EVENT_MUTEX1_STREAM_EOF,
	/* DISPSYS */
	CMDQ_EVENT_MUTEX2_STREAM_EOF,
	/* DISPSYS */
	CMDQ_EVENT_MUTEX3_STREAM_EOF,
	/* DISPSYS, please refer to disp_hal.h */
	CMDQ_EVENT_MUTEX4_STREAM_EOF,
	/* DpFramework */
	CMDQ_EVENT_MUTEX5_STREAM_EOF,
	/* DpFramework */
	CMDQ_EVENT_MUTEX6_STREAM_EOF,
	/* DpFramework */
	CMDQ_EVENT_MUTEX7_STREAM_EOF,
	/* DpFramework */
	CMDQ_EVENT_MUTEX8_STREAM_EOF,
	/* DpFramework via CMDQ_IOCTL_LOCK_MUTEX */
	CMDQ_EVENT_MUTEX9_STREAM_EOF,
	CMDQ_EVENT_MUTEX10_STREAM_EOF,
	CMDQ_EVENT_MUTEX11_STREAM_EOF,
	CMDQ_EVENT_MUTEX12_STREAM_EOF,
	CMDQ_EVENT_MUTEX13_STREAM_EOF,
	CMDQ_EVENT_MUTEX14_STREAM_EOF,
	CMDQ_EVENT_MUTEX15_STREAM_EOF,

	/* Display underrun */
	CMDQ_EVENT_DISP_RDMA0_UNDERRUN,
	CMDQ_EVENT_DISP_RDMA1_UNDERRUN,
	CMDQ_EVENT_DISP_RDMA2_UNDERRUN,

	/* Display TE */
	CMDQ_EVENT_DSI_TE,
	CMDQ_EVENT_DSI0_TE,
	CMDQ_EVENT_DSI1_TE,
	CMDQ_EVENT_MDP_DSI0_TE_SOF,
	CMDQ_EVENT_MDP_DSI1_TE_SOF,
	CMDQ_EVENT_DISP_DSI0_SOF,
	CMDQ_EVENT_DISP_DSI1_SOF,
	CMDQ_EVENT_DSI0_TO_GCE_MMCK0,
	CMDQ_EVENT_DSI0_TO_GCE_MMCK1,
	CMDQ_EVENT_DSI0_TO_GCE_MMCK2,
	CMDQ_EVENT_DSI0_TO_GCE_MMCK3,
	CMDQ_EVENT_DSI0_TO_GCE_MMCK4,
	CMDQ_EVENT_DSI1_TO_GCE_MMCK0,
	CMDQ_EVENT_DSI1_TO_GCE_MMCK1,
	CMDQ_EVENT_DSI1_TO_GCE_MMCK2,
	CMDQ_EVENT_DSI1_TO_GCE_MMCK3,
	CMDQ_EVENT_DSI1_TO_GCE_MMCK4,
	CMDQ_EVENT_DSI0_IRQ_EVENT,
	CMDQ_EVENT_DSI0_DONE_EVENT,
	CMDQ_EVENT_DSI1_IRQ_EVENT,
	CMDQ_EVENT_DSI1_DONE_EVENT,

	/* Reset Event */
	CMDQ_EVENT_DISP_WDMA0_RST_DONE,
	CMDQ_EVENT_DISP_WDMA1_RST_DONE,
	CMDQ_EVENT_MDP_WROT0_RST_DONE,
	CMDQ_EVENT_MDP_WROT1_RST_DONE,
	CMDQ_EVENT_MDP_WDMA_RST_DONE,
	CMDQ_EVENT_MDP_RDMA0_RST_DONE,
	CMDQ_EVENT_MDP_RDMA1_RST_DONE,

	/* Display Mutex */
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD0,
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD1,
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD2,
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD3,
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD4,
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD5,
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD6,
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD7,
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD8,
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD9,
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD10,
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD11,
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD12,
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD13,
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD14,
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD15,

	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE0,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE1,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE2,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE3,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE4,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE5,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE6,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE7,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE8,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE9,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE10,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE11,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE12,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE13,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE14,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE15,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE16,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE17,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE18,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE19,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE20,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE21,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE22,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE23,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE24,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE25,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE26,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE27,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE28,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE29,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE30,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE31,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE32,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE33,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE34,

	/* ISP frame done */
	CMDQ_EVENT_ISP_PASS2_2_EOF,
	CMDQ_EVENT_ISP_PASS2_1_EOF,
	CMDQ_EVENT_ISP_PASS2_0_EOF,
	CMDQ_EVENT_ISP_PASS1_1_EOF,
	CMDQ_EVENT_ISP_PASS1_0_EOF,

	/* ISP (IMGSYS) frame done */
	CMDQ_EVENT_DIP_CQ_THREAD0_EOF,
	CMDQ_EVENT_DIP_CQ_THREAD1_EOF,
	CMDQ_EVENT_DIP_CQ_THREAD2_EOF,
	CMDQ_EVENT_DIP_CQ_THREAD3_EOF,
	CMDQ_EVENT_DIP_CQ_THREAD4_EOF,
	CMDQ_EVENT_DIP_CQ_THREAD5_EOF,
	CMDQ_EVENT_DIP_CQ_THREAD6_EOF,
	CMDQ_EVENT_DIP_CQ_THREAD7_EOF,
	CMDQ_EVENT_DIP_CQ_THREAD8_EOF,
	CMDQ_EVENT_DIP_CQ_THREAD9_EOF,
	CMDQ_EVENT_DIP_CQ_THREAD10_EOF,
	CMDQ_EVENT_DIP_CQ_THREAD11_EOF,
	CMDQ_EVENT_DIP_CQ_THREAD12_EOF,
	CMDQ_EVENT_DIP_CQ_THREAD13_EOF,
	CMDQ_EVENT_DIP_CQ_THREAD14_EOF,
	CMDQ_EVENT_DIP_CQ_THREAD15_EOF,
	CMDQ_EVENT_DIP_CQ_THREAD16_EOF,
	CMDQ_EVENT_DIP_CQ_THREAD17_EOF,
	CMDQ_EVENT_DIP_CQ_THREAD18_EOF,
	CMDQ_EVENT_DPE_EOF,
	CMDQ_EVENT_DVE_EOF,
	CMDQ_EVENT_WMF_EOF,
	CMDQ_EVENT_GEPF_EOF,
	CMDQ_EVENT_GEPF_TEMP_EOF,
	CMDQ_EVENT_GEPF_BYPASS_EOF,
	CMDQ_EVENT_RSC_EOF,

	/* ISP (IMGSYS) engine events */
	CMDQ_EVENT_ISP_SENINF_CAM1_2_3_FULL,
	CMDQ_EVENT_ISP_SENINF_CAM0_FULL,

	/* VENC frame done */
	CMDQ_EVENT_VENC_EOF,

	/* JPEG frame done */
	CMDQ_EVENT_JPEG_ENC_EOF,
	CMDQ_EVENT_JPEG_ENC_PASS2_EOF,
	CMDQ_EVENT_JPEG_ENC_PASS1_EOF,
	CMDQ_EVENT_JPEG_DEC_EOF,

	/* VENC engine events */
	CMDQ_EVENT_VENC_MB_DONE,
	CMDQ_EVENT_VENC_128BYTE_CNT_DONE,

	/* ISP (CAMSYS) frame done */
	CMDQ_EVENT_ISP_FRAME_DONE_A,
	CMDQ_EVENT_ISP_FRAME_DONE_B,
	CMDQ_EVENT_ISP_CAMSV_0_PASS1_DONE,
	CMDQ_EVENT_ISP_CAMSV_1_PASS1_DONE,
	CMDQ_EVENT_ISP_CAMSV_2_PASS1_DONE,
	CMDQ_EVENT_ISP_TSF_DONE,

	/* ISP (CAMSYS) engine events */
	CMDQ_EVENT_SENINF_0_FIFO_FULL,
	CMDQ_EVENT_SENINF_1_FIFO_FULL,
	CMDQ_EVENT_SENINF_2_FIFO_FULL,
	CMDQ_EVENT_SENINF_3_FIFO_FULL,
	CMDQ_EVENT_SENINF_4_FIFO_FULL,
	CMDQ_EVENT_SENINF_5_FIFO_FULL,
	CMDQ_EVENT_SENINF_6_FIFO_FULL,
	CMDQ_EVENT_SENINF_7_FIFO_FULL,

	/* 6799 New Event */
	CMDQ_EVENT_DISP_DSC1_SOF,
	CMDQ_EVENT_DISP_DSC2_SOF,
	CMDQ_EVENT_DISP_RSZ0_SOF,
	CMDQ_EVENT_DISP_RSZ1_SOF,
	CMDQ_EVENT_DISP_DSC0_EOF,
	CMDQ_EVENT_DISP_DSC1_EOF,
	CMDQ_EVENT_DISP_RSZ0_EOF,
	CMDQ_EVENT_DISP_RSZ1_EOF,
	CMDQ_EVENT_DISP_OVL0_RST_DONE,
	CMDQ_EVENT_DISP_OVL1_RST_DONE,
	CMDQ_EVENT_DISP_OVL0_2L_RST_DONE,
	CMDQ_EVENT_DISP_OVL1_2L_RST_DONE,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE35,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE36,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE37,
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE38,
	CMDQ_EVENT_WPE_A_EOF,
	CMDQ_EVENT_EAF_EOF,
	CMDQ_EVENT_VENC_BSDMA_FULL,
	CMDQ_EVENT_IPU0_EOF,
	CMDQ_EVENT_IPU1_EOF,
	CMDQ_EVENT_IPU2_EOF,
	CMDQ_EVENT_IPU3_EOF,

	/* 6759 New Event */
	CMDQ_EVENT_DISP_SPLIT_SOF,
	CMDQ_EVENT_DISP_SPLIT_FRAME_DONE,
	CMDQ_EVENT_AMD_FRAME_DONE,

	CMDQ_EVENT_DISP_DPI0_SOF,
	CMDQ_EVENT_DSI0_TE_INFRA,

	/* 6739 New Event*/
	CMDQ_EVENT_DISP_DBI0_SOF,
	CMDQ_EVENT_DISP_DBI0_EOF,

	/* 6771 New Event */
	CMDQ_EVENT_SPE_B_FRAME_DONE,

	/* 6775 New Event*/
	CMDQ_EVENT_MDP_CCORR_SOF,
	CMDQ_EVENT_MDP_CCORR_FRAME_DONE,
	CMDQ_EVENT_MDP_AAL_FRAME_DONE,
	CMDQ_EVENT_WPE_B_FRAME_DONE,
	CMDQ_EVENT_MFB_DONE,
	CMDQ_EVENT_OCC_DONE,
	CMDQ_EVENT_IPU_DONE_1_1,
	CMDQ_EVENT_IPU_DONE_1_2,
	CMDQ_EVENT_IPU_DONE_1_0,
	CMDQ_EVENT_IPU_DONE_1_3,
	CMDQ_EVENT_IPU_DONE_2_0,
	CMDQ_EVENT_IPU_DONE_2_1,
	CMDQ_EVENT_IPU_DONE_2_3,
	CMDQ_EVENT_IPU_DONE_2_2,

	/* Keep this at the end of HW events */
	CMDQ_MAX_HW_EVENT_COUNT = 400,

	/* SW Sync Tokens (Pre-defined) */
	/* Config thread notify trigger thread */
	CMDQ_SYNC_TOKEN_CONFIG_DIRTY = 401,
	/* Trigger thread notify config thread */
	CMDQ_SYNC_TOKEN_STREAM_EOF = 402,
	/* Block Trigger thread until the ESD check finishes. */
	CMDQ_SYNC_TOKEN_ESD_EOF = 403,
	/* check CABC setup finish */
	CMDQ_SYNC_TOKEN_CABC_EOF = 404,
	/* Block Trigger thread until the path freeze finishes */
	CMDQ_SYNC_TOKEN_FREEZE_EOF = 405,
	/* Pass-2 notifies VENC frame is ready to be encoded */
	CMDQ_SYNC_TOKEN_VENC_INPUT_READY = 406,
	/* VENC notifies Pass-2 encode done so next frame may start */
	CMDQ_SYNC_TOKEN_VENC_EOF = 407,

	/* Notify normal CMDQ there are some secure task done */
	CMDQ_SYNC_SECURE_THR_EOF = 408,
	/* Lock WSM resource */
	CMDQ_SYNC_SECURE_WSM_LOCK = 409,

	/* SW Sync Tokens (User-defined) */
	CMDQ_SYNC_TOKEN_USER_0 = 410,
	CMDQ_SYNC_TOKEN_USER_1 = 411,
	CMDQ_SYNC_TOKEN_POLL_MONITOR = 412,

	/* SW Sync Tokens (Pre-defined) */
	/* Config thread notify trigger thread for external display */
	CMDQ_SYNC_TOKEN_EXT_CONFIG_DIRTY = 415,
	/* Trigger thread notify config thread */
	CMDQ_SYNC_TOKEN_EXT_STREAM_EOF = 416,
	/* Check CABC setup finish */
	CMDQ_SYNC_TOKEN_EXT_CABC_EOF = 417,

	/* Secure video path notify SW token */
	CMDQ_SYNC_DISP_OVL0_2NONSEC_END = 420,
	CMDQ_SYNC_DISP_OVL1_2NONSEC_END = 421,
	CMDQ_SYNC_DISP_2LOVL0_2NONSEC_END = 422,
	CMDQ_SYNC_DISP_2LOVL1_2NONSEC_END = 423,
	CMDQ_SYNC_DISP_RDMA0_2NONSEC_END = 424,
	CMDQ_SYNC_DISP_RDMA1_2NONSEC_END = 425,
	CMDQ_SYNC_DISP_WDMA0_2NONSEC_END = 426,
	CMDQ_SYNC_DISP_WDMA1_2NONSEC_END = 427,
	CMDQ_SYNC_DISP_EXT_STREAM_EOF = 428,

	/**
	 * Event for CMDQ to block executing command when append command
	 * Plz sync CMDQ_SYNC_TOKEN_APPEND_THR(id) in cmdq_core source file.
	 */
	CMDQ_SYNC_TOKEN_APPEND_THR0 = 432,
	CMDQ_SYNC_TOKEN_APPEND_THR1 = 433,
	CMDQ_SYNC_TOKEN_APPEND_THR2 = 434,
	CMDQ_SYNC_TOKEN_APPEND_THR3 = 435,
	CMDQ_SYNC_TOKEN_APPEND_THR4 = 436,
	CMDQ_SYNC_TOKEN_APPEND_THR5 = 437,
	CMDQ_SYNC_TOKEN_APPEND_THR6 = 438,
	CMDQ_SYNC_TOKEN_APPEND_THR7 = 439,
	CMDQ_SYNC_TOKEN_APPEND_THR8 = 440,
	CMDQ_SYNC_TOKEN_APPEND_THR9 = 441,
	CMDQ_SYNC_TOKEN_APPEND_THR10 = 442,
	CMDQ_SYNC_TOKEN_APPEND_THR11 = 443,
	CMDQ_SYNC_TOKEN_APPEND_THR12 = 444,
	CMDQ_SYNC_TOKEN_APPEND_THR13 = 445,
	CMDQ_SYNC_TOKEN_APPEND_THR14 = 446,
	CMDQ_SYNC_TOKEN_APPEND_THR15 = 447,
	CMDQ_SYNC_TOKEN_APPEND_THR16 = 448,
	CMDQ_SYNC_TOKEN_APPEND_THR17 = 449,
	CMDQ_SYNC_TOKEN_APPEND_THR18 = 450,
	CMDQ_SYNC_TOKEN_APPEND_THR19 = 451,
	CMDQ_SYNC_TOKEN_APPEND_THR20 = 452,
	CMDQ_SYNC_TOKEN_APPEND_THR21 = 453,
	CMDQ_SYNC_TOKEN_APPEND_THR22 = 454,
	CMDQ_SYNC_TOKEN_APPEND_THR23 = 455,
	CMDQ_SYNC_TOKEN_APPEND_THR24 = 456,
	CMDQ_SYNC_TOKEN_APPEND_THR25 = 457,
	CMDQ_SYNC_TOKEN_APPEND_THR26 = 458,
	CMDQ_SYNC_TOKEN_APPEND_THR27 = 459,
	CMDQ_SYNC_TOKEN_APPEND_THR28 = 460,
	CMDQ_SYNC_TOKEN_APPEND_THR29 = 461,
	CMDQ_SYNC_TOKEN_APPEND_THR30 = 462,
	CMDQ_SYNC_TOKEN_APPEND_THR31 = 463,

	/* GPR access tokens (for HW register backup) */
	/* There are 15 32-bit GPR, 3 GPR form a set (64-bit for address, 32-bit for value) */
	CMDQ_SYNC_TOKEN_GPR_SET_0 = 470,
	CMDQ_SYNC_TOKEN_GPR_SET_1 = 471,
	CMDQ_SYNC_TOKEN_GPR_SET_2 = 472,
	CMDQ_SYNC_TOKEN_GPR_SET_3 = 473,
	CMDQ_SYNC_TOKEN_GPR_SET_4 = 474,

	/* Resource lock event to control resource in GCE thread */
	CMDQ_SYNC_RESOURCE_WROT0 = 480,
	CMDQ_SYNC_RESOURCE_WROT1 = 481,

	/**
	 * Event for CMDQ delay implement
	 * Plz sync CMDQ_SYNC_TOKEN_DELAY_THR(id) in cmdq_core source file.
	 */
	CMDQ_SYNC_TOKEN_TIMER = 485,
	CMDQ_SYNC_TOKEN_DELAY_SET0 = 486,
	CMDQ_SYNC_TOKEN_DELAY_SET1 = 487,
	CMDQ_SYNC_TOKEN_DELAY_SET2 = 488,

	/* GCE HW TPR Event*/
	CMDQ_EVENT_TIMER_00 = 962,
	CMDQ_EVENT_TIMER_01 = 963,
	CMDQ_EVENT_TIMER_02 = 964,
	CMDQ_EVENT_TIMER_03 = 965,
	CMDQ_EVENT_TIMER_04 = 966,
	/* 5: 1us */
	CMDQ_EVENT_TIMER_05 = 967,
	CMDQ_EVENT_TIMER_06 = 968,
	CMDQ_EVENT_TIMER_07 = 969,
	/* 8: 10us */
	CMDQ_EVENT_TIMER_08 = 970,
	CMDQ_EVENT_TIMER_09 = 971,
	CMDQ_EVENT_TIMER_10 = 972,
	/* 11: 100us */
	CMDQ_EVENT_TIMER_11 = 973,
	CMDQ_EVENT_TIMER_12 = 974,
	CMDQ_EVENT_TIMER_13 = 975,
	CMDQ_EVENT_TIMER_14 = 976,
	/* 15: 1ms */
	CMDQ_EVENT_TIMER_15 = 977,
	CMDQ_EVENT_TIMER_16 = 978,
	CMDQ_EVENT_TIMER_17 = 979,
	/* 18: 10ms */
	CMDQ_EVENT_TIMER_18 = 980,
	CMDQ_EVENT_TIMER_19 = 981,
	CMDQ_EVENT_TIMER_20 = 982,
	/* 21: 100ms */
	CMDQ_EVENT_TIMER_21 = 983,
	CMDQ_EVENT_TIMER_22 = 984,
	CMDQ_EVENT_TIMER_23 = 985,
	CMDQ_EVENT_TIMER_24 = 986,
	CMDQ_EVENT_TIMER_25 = 987,
	CMDQ_EVENT_TIMER_26 = 988,
	CMDQ_EVENT_TIMER_27 = 989,
	CMDQ_EVENT_TIMER_28 = 990,
	CMDQ_EVENT_TIMER_29 = 991,
	CMDQ_EVENT_TIMER_30 = 992,
	CMDQ_EVENT_TIMER_31 = 993,

	/* event id is 9 bit */
	CMDQ_SYNC_TOKEN_MAX = 0x3FF,
	CMDQ_SYNC_TOKEN_INVALID = -1,
};

#endif
