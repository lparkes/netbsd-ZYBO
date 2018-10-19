/* $NetBSD: tegra_gpioreg.h,v 1.1 2015/05/02 12:08:32 jmcneill Exp $ */

/*-
 * Copyright (c) 2015 Jared D. McNeill <jmcneill@invisible.ca>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef _ARM_TEGRA_MPIOREG_H
#define _ARM_TEGRA_MPIOREG_H

#define PADGRP_GMACFG_REG			0x0900
#define PADGRP_SDIO1CFG_REG			0x08ec
#define PADGRP_SDIO3CFG_REG			0x08b0
#define PADGRP_SDIO4CFG_REG			0x09c4
#define PADGRP_AOCFG0_REG			0x09b0
#define PADGRP_AOCFG1_REG			0x0868
#define PADGRP_AOCFG2_REG			0x086c
#define PADGRP_AOCFG3_REG			0x09a8
#define PADGRP_AOCFG4_REG			0x09c8
#define PADGRP_CDEV1CFG_REG			0x0884
#define PADGRP_CDEV2CFG_REG			0x0888
#define PADGRP_CECCFG_REG			0x0938
#define PADGRP_DAP1CFG_REG			0x0890
#define PADGRP_DAP2CFG_REG			0x0898
#define PADGRP_DAP3CFG_REG			0x0890
#define PADGRP_DAP4CFG_REG			0x089c
#define PADGRP_DAP5CFG_REG			0x0998
#define PADGRP_DBGCFG_REG			0x08a0
#define PADGRP_DDCCFG_REG			0x08fc
#define PADGRP_DEV3CFG_REG			0x092c
#define PADGRP_OWRCFG_REG			0x0920
#define PADGRP_SPICFG_REG			0x08b4
#define PADGRP_UAACFG_REG			0x08b8
#define PADGRP_UABCFG_REG			0x08bc
#define PADGRP_UART2CFG_REG			0x08c0
#define PADGRP_UART3CFG_REG			0x08c4
#define PADGRP_UDACFG_REG			0x0924
#define PADGRP_ATCFG1_REG			0x0870
#define PADGRP_ATCFG2_REG			0x0874
#define PADGRP_ATCFG3_REG			0x0878
#define PADGRP_ATCFG4_REG			0x087c
#define PADGRP_ATCFG5_REG			0x0880
#define PADGRP_ATCFG6_REG			0x0894
#define PADGRP_GMECFG_REG			0x0910
#define PADGRP_GMFCFG_REG			0x0914
#define PADGRP_GMGCFG_REG			0x0918
#define PADGRP_GMHCFG_REG			0x091c
#define PADGRP_HVCFG0_REG			0x09b4
#define PADGRP_GPVCFG_REG			0x0928
#define PADGRP_USB_VBUS_EN_CFG_REG		0x099c

#define PINMUX_AUX_ULPI_DATA0_REG		0x3000
#define PINMUX_AUX_ULPI_DATA1_REG		0x3004
#define PINMUX_AUX_ULPI_DATA2_REG		0x3008
#define PINMUX_AUX_ULPI_DATA3_REG		0x300c
#define PINMUX_AUX_ULPI_DATA4_REG		0x3010
#define PINMUX_AUX_ULPI_DATA5_REG		0x3014
#define PINMUX_AUX_ULPI_DATA6_REG		0x3018
#define PINMUX_AUX_ULPI_DATA7_REG		0x301c
#define PINMUX_AUX_ULPI_CLK_REG			0x3020
#define PINMUX_AUX_ULPI_DIR_REG			0x3024
#define PINMUX_AUX_ULPI_NXT_REG			0x3028
#define PINMUX_AUX_ULPI_STP_REG			0x302c
#define PINMUX_AUX_DAP3_FS_REG			0x3030
#define PINMUX_AUX_DAP3_DIN_REG			0x3034
#define PINMUX_AUX_DAP3_DOUT_REG		0x3038
#define PINMUX_AUX_DAP3_SCLK_REG		0x303c
#define PINMUX_AUX_GPIO_PV0_REG			0x3040
#define PINMUX_AUX_GPIO_PV1_REG			0x3044
#define PINMUX_AUX_SDMMC1_CLK_REG		0x3048
#define PINMUX_AUX_SDMMC1_CMD_REG		0x304c
#define PINMUX_AUX_SDMMC1_DAT3_REG		0x3050
#define PINMUX_AUX_SDMMC1_DAT2_REG		0x3054
#define PINMUX_AUX_SDMMC1_DAT1_REG		0x3058
#define PINMUX_AUX_SDMMC1_DAT0_REG		0x305c
#define PINMUX_AUX_CLK2_OUT_REG			0x3068
#define PINMUX_AUX_CLK2_REQ_REG			0x306c
#define PINMUX_AUX_HDMI_INT_REG			0x3110
#define PINMUX_AUX_DDC_SCL_REG			0x3114
#define PINMUX_AUX_DDC_SDA_REG			0x3118
#define PINMUX_AUX_UART2_RXD_REG		0x3164
#define PINMUX_AUX_UART2_TXD_REG		0x3168
#define PINMUX_AUX_UART2_RTS_N_REG		0x316c
#define PINMUX_AUX_UART2_CTS_N_REG		0x3170
#define PINMUX_AUX_UART3_TXD_REG		0x3174
#define PINMUX_AUX_UART3_RXD_REG		0x3178
#define PINMUX_AUX_UART3_CTS_N_REG		0x317c
#define PINMUX_AUX_UART3_RTS_N_REG		0x3180
#define PINMUX_AUX_GPIO_PU0_REG			0x3184
#define PINMUX_AUX_GPIO_PU1_REG			0x3188
#define PINMUX_AUX_GPIO_PU2_REG			0x318c
#define PINMUX_AUX_GPIO_PU3_REG			0x3190
#define PINMUX_AUX_GPIO_PU4_REG			0x3194
#define PINMUX_AUX_GPIO_PU5_REG			0x3198
#define PINMUX_AUX_GPIO_PU6_REG			0x319c
#define PINMUX_AUX_GEN1_I2C_SDA_REG		0x31a0
#define PINMUX_AUX_GEN1_I2C_SCL_REG		0x31a4
#define PINMUX_AUX_DAP4_FS_REG			0x31a8
#define PINMUX_AUX_DAP4_DIN_REG			0x31ac
#define PINMUX_AUX_DAP4_DOUT_REG		0x31b0
#define PINMUX_AUX_DAP4_SCLK_REG		0x31b4
#define PINMUX_AUX_CLK3_OUT_REG			0x31b8
#define PINMUX_AUX_CLK3_REQ_REG			0x31bc
#define PINMUX_AUX_GPIO_PC7_REG			0x31c0
#define PINMUX_AUX_GPIO_PI5_REG			0x31c4
#define PINMUX_AUX_GPIO_PI7_REG			0x31c8
#define PINMUX_AUX_GPIO_PK0_REG			0x31cc
#define PINMUX_AUX_GPIO_PK1_REG			0x31d0
#define PINMUX_AUX_GPIO_PJ0_REG			0x31d4
#define PINMUX_AUX_GPIO_PJ2_REG			0x31d8
#define PINMUX_AUX_GPIO_PK3_REG			0x31dc
#define PINMUX_AUX_GPIO_PK4_REG			0x31e0
#define PINMUX_AUX_GPIO_PK2_REG			0x31e4
#define PINMUX_AUX_GPIO_PI3_REG			0x31e8
#define PINMUX_AUX_GPIO_PI6_REG			0x31ec
#define PINMUX_AUX_GPIO_PG0_REG			0x31f0
#define PINMUX_AUX_GPIO_PG1_REG			0x31f4
#define PINMUX_AUX_GPIO_PG2_REG			0x31f8
#define PINMUX_AUX_GPIO_PG3_REG			0x31fc
#define PINMUX_AUX_GPIO_PG4_REG			0x3200
#define PINMUX_AUX_GPIO_PG5_REG			0x3204
#define PINMUX_AUX_GPIO_PG6_REG			0x3208
#define PINMUX_AUX_GPIO_PG7_REG			0x320c
#define PINMUX_AUX_GPIO_PH0_REG			0x3210
#define PINMUX_AUX_GPIO_PH1_REG			0x3214
#define PINMUX_AUX_GPIO_PH2_REG			0x3218
#define PINMUX_AUX_GPIO_PH3_REG			0x321c
#define PINMUX_AUX_GPIO_PH4_REG			0x3220
#define PINMUX_AUX_GPIO_PH5_REG			0x3224
#define PINMUX_AUX_GPIO_PH6_REG			0x3228
#define PINMUX_AUX_GPIO_PH7_REG			0x322c
#define PINMUX_AUX_GPIO_PJ7_REG			0x3230
#define PINMUX_AUX_GPIO_PB0_REG			0x3234
#define PINMUX_AUX_GPIO_PB1_REG			0x3238
#define PINMUX_AUX_GPIO_PK7_REG			0x323c
#define PINMUX_AUX_GPIO_PI0_REG			0x3240
#define PINMUX_AUX_GPIO_PI1_REG			0x3244
#define PINMUX_AUX_GPIO_PI2_REG			0x3248
#define PINMUX_AUX_GPIO_PI4_REG			0x324c
#define PINMUX_AUX_GEN2_I2C_SCL_REG		0x3250
#define PINMUX_AUX_GEN2_I2C_SDA_REG		0x3254
#define PINMUX_AUX_SDMMC4_CLK_REG		0x3258
#define PINMUX_AUX_SDMMC4_CMD_REG		0x325c
#define PINMUX_AUX_SDMMC4_DAT0_REG		0x3260
#define PINMUX_AUX_SDMMC4_DAT1_REG		0x3264
#define PINMUX_AUX_SDMMC4_DAT2_REG		0x3268
#define PINMUX_AUX_SDMMC4_DAT3_REG		0x326c
#define PINMUX_AUX_SDMMC4_DAT4_REG		0x3270
#define PINMUX_AUX_SDMMC4_DAT5_REG		0x3274
#define PINMUX_AUX_SDMMC4_DAT6_REG		0x3278
#define PINMUX_AUX_SDMMC4_DAT7_REG		0x327c
#define PINMUX_AUX_CAM_MCLK_REG			0x3284
#define PINMUX_AUX_GPIO_PCC1_REG		0x3288
#define PINMUX_AUX_GPIO_PBB0_REG		0x328c
#define PINMUX_AUX_CAM_I2C_SCL_REG		0x3290
#define PINMUX_AUX_CAM_I2C_SDA_REG		0x3294
#define PINMUX_AUX_GPIO_PBB3_REG		0x3298
#define PINMUX_AUX_GPIO_PBB4_REG		0x329c
#define PINMUX_AUX_GPIO_PBB5_REG		0x32a0
#define PINMUX_AUX_GPIO_PBB6_REG		0x32a4
#define PINMUX_AUX_GPIO_PBB7_REG		0x32a8
#define PINMUX_AUX_GPIO_PCC2_REG		0x32ac
#define PINMUX_AUX_JTAG_RTCK_REG		0x32b0
#define PINMUX_AUX_PWR_I2C_SCL_REG		0x32b4
#define PINMUX_AUX_PWR_I2C_SDA_REG		0x32b8
#define PINMUX_AUX_KB_ROW0_REG			0x32bc
#define PINMUX_AUX_KB_ROW1_REG			0x32c0
#define PINMUX_AUX_KB_ROW2_REG			0x32c4
#define PINMUX_AUX_KB_ROW3_REG			0x32c8
#define PINMUX_AUX_KB_ROW4_REG			0x32cc
#define PINMUX_AUX_KB_ROW5_REG			0x32d0
#define PINMUX_AUX_KB_ROW6_REG			0x32d4
#define PINMUX_AUX_KB_ROW7_REG			0x32d8
#define PINMUX_AUX_KB_ROW8_REG			0x32dc
#define PINMUX_AUX_KB_ROW9_REG			0x32e0
#define PINMUX_AUX_KB_ROW10_REG			0x32e4
#define PINMUX_AUX_KB_ROW11_REG			0x32e8
#define PINMUX_AUX_KB_ROW12_REG			0x32ec
#define PINMUX_AUX_KB_ROW13_REG			0x32f0
#define PINMUX_AUX_KB_ROW14_REG			0x32f4
#define PINMUX_AUX_KB_ROW15_REG			0x32f8
#define PINMUX_AUX_KB_COL0_REG			0x32fc
#define PINMUX_AUX_KB_COL1_REG			0x3300
#define PINMUX_AUX_KB_COL2_REG			0x3304
#define PINMUX_AUX_KB_COL3_REG			0x3308
#define PINMUX_AUX_KB_COL4_REG			0x330c
#define PINMUX_AUX_KB_COL5_REG			0x3310
#define PINMUX_AUX_KB_COL6_REG			0x3314
#define PINMUX_AUX_KB_COL7_REG			0x3318
#define PINMUX_AUX_CLK_32K_OUT_REG		0x331c
#define PINMUX_AUX_CORE_PWR_REQ_REG		0x3324
#define PINMUX_AUX_CPU_PWR_REQ_REG		0x3328
#define PINMUX_AUX_PWR_INT_N_REG		0x332c
#define PINMUX_AUX_CLK_32K_IN_REG		0x3330
#define PINMUX_AUX_OWR_REG			0x3334
#define PINMUX_AUX_DAP1_FS_REG			0x3338
#define PINMUX_AUX_DAP1_DIN_REG			0x333c
#define PINMUX_AUX_DAP1_DOUT_REG		0x3340
#define PINMUX_AUX_DAP1_SCLK_REG		0x3344
#define PINMUX_AUX_DAP_MCLK1_REQ_REG		0x3348
#define PINMUX_AUX_DAP_MCLK1_REG		0x334c
#define PINMUX_AUX_SPDIF_IN_REG			0x3350
#define PINMUX_AUX_SPDIF_OUT_REG		0x3354
#define PINMUX_AUX_DAP2_FS_REG			0x3358
#define PINMUX_AUX_DAP2_DIN_REG			0x335c
#define PINMUX_AUX_DAP2_DOUT_REG		0x3360
#define PINMUX_AUX_DAP2_SCLK_REG		0x3364
#define PINMUX_AUX_DVFS_PWM_REG			0x3368
#define PINMUX_AUX_GPIO_X1_AUD_REG		0x336c
#define PINMUX_AUX_GPIO_X3_AUD_REG		0x3370
#define PINMUX_AUX_DVFS_CLK_REG			0x3374
#define PINMUX_AUX_GPIO_X4_AUD_REG		0x3378
#define PINMUX_AUX_GPIO_X5_AUD_REG		0x337c
#define PINMUX_AUX_GPIO_X6_AUD_REG		0x3380
#define PINMUX_AUX_GPIO_X7_AUD_REG		0x3384
#define PINMUX_AUX_SDMMC3_CLK_REG		0x3390
#define PINMUX_AUX_SDMMC3_CMD_REG		0x3394
#define PINMUX_AUX_SDMMC3_DAT0_REG		0x3398
#define PINMUX_AUX_SDMMC3_DAT1_REG		0x339c
#define PINMUX_AUX_SDMMC3_DAT2_REG		0x33a0
#define PINMUX_AUX_SDMMC3_DAT3_REG		0x33a4
#define PINMUX_AUX_PEX_L0_RST_N_REG		0x33bc
#define PINMUX_AUX_PEX_L0_CLKREQ_N_REG		0x33c0
#define PINMUX_AUX_PEX_WAKE_N_REG		0x33c4
#define PINMUX_AUX_PEX_L1_RST_N_REG		0x33cc
#define PINMUX_AUX_PEX_L1_CLKREQ_N_REG		0x33d0
#define PINMUX_AUX_HDMI_CEC_REG			0x33e0
#define PINMUX_AUX_SDMMC1_WP_N_REG		0x33e4
#define PINMUX_AUX_SDMMC3_CD_N_REG		0x33e8
#define PINMUX_AUX_GPIO_W2_AUD_REG		0x33ec
#define PINMUX_AUX_GPIO_W3_AUD_REG		0x33f0
#define PINMUX_AUX_USB_VBUS_EN0_REG		0x33f4
#define PINMUX_AUX_USB_VBUS_EN1_REG		0x33f8
#define PINMUX_AUX_SDMMC3_CLK_LB_IN_REG		0x33fc
#define PINMUX_AUX_SDMMC3_CLK_LB_OUT_REG	0x3400
#define PINMUX_AUX_GMI_CLK_LB_REG		0x3404
#define PINMUX_AUX_RESET_OUT_N_REG		0x3408
#define PINMUX_AUX_KB_ROW16_REG			0x340c
#define PINMUX_AUX_KB_ROW17_REG			0x3410
#define PINMUX_AUX_USB_VBUS_EN2_REG		0x3414
#define PINMUX_AUX_GPIO_PFF2_REG		0x3418
#define PINMUX_AUX_DP_HPD_REG			0x3430

#define PINMUX_AUX_RCV_SEL			__BIT(9)
#define PINMUX_AUX_IO_RESET			__BIT(8)
#define PINMUX_AUX_LOCK				__BIT(7)
#define PINMUX_AUX_OD				__BIT(6)
#define PINMUX_AUX_E_INPUT			__BIT(5)
#define PINMUX_AUX_TRISTATE			__BIT(4)
#define PINMUX_AUX_PUPD				__BITS(3,2)
#define PINMUX_AUX_PUPD_NORMAL			0
#define PINMUX_AUX_PUPD_PULL_DOWN		1
#define PINMUX_AUX_PUPD_PULL_UP			2
#define PINMUX_AUX_PM				__BITS(1,0)

#endif /* _ARM_TEGRA_MPIOREG_H */