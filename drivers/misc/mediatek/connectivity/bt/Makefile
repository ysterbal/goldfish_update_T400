#########################################################
# Bluetooth character device driver
#########################################################

############ 7668 BT sdio Driver ########################
ifneq ($(filter "MT7668",$(CONFIG_MTK_COMBO_CHIP)),)
obj-y += mt76xx/
else
ccflags-y += -D CREATE_NODE_DYNAMIC=1

ccflags-y += \
	-I$(src)/../common/common_main/include \
	-I$(src)/../common/common_main/linux/include

obj-$(CONFIG_MTK_COMBO_BT) += ./mt66xx/stp_chrdev_bt.o
endif
