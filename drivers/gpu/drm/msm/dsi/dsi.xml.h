#ifndef DSI_XML
#define DSI_XML

/* Autogenerated file, DO NOT EDIT manually!

This file was generated by the rules-ng-ng headergen tool in this git repository:
http://github.com/freedreno/envytools/
git clone https://github.com/freedreno/envytools.git

The rules-ng-ng source files this header was generated from are:
- /home/robclark/src/freedreno/envytools/rnndb/msm.xml                 (    647 bytes, from 2013-11-30 14:45:35)
- /home/robclark/src/freedreno/envytools/rnndb/freedreno_copyright.xml (   1453 bytes, from 2013-03-31 16:51:27)
- /home/robclark/src/freedreno/envytools/rnndb/mdp/mdp4.xml            (  17996 bytes, from 2013-12-01 19:10:31)
- /home/robclark/src/freedreno/envytools/rnndb/mdp/mdp_common.xml      (   1615 bytes, from 2013-11-30 15:00:52)
- /home/robclark/src/freedreno/envytools/rnndb/mdp/mdp5.xml            (  22517 bytes, from 2013-12-03 20:59:13)
- /home/robclark/src/freedreno/envytools/rnndb/dsi/dsi.xml             (  11712 bytes, from 2013-08-17 17:13:43)
- /home/robclark/src/freedreno/envytools/rnndb/dsi/sfpb.xml            (    344 bytes, from 2013-08-11 19:26:32)
- /home/robclark/src/freedreno/envytools/rnndb/dsi/mmss_cc.xml         (   1544 bytes, from 2013-08-16 19:17:05)
- /home/robclark/src/freedreno/envytools/rnndb/hdmi/qfprom.xml         (    600 bytes, from 2013-07-05 19:21:12)
- /home/robclark/src/freedreno/envytools/rnndb/hdmi/hdmi.xml           (  20932 bytes, from 2013-12-01 15:13:04)

Copyright (C) 2013 by the following authors:
- Rob Clark <robdclark@gmail.com> (robclark)

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice (including the
next paragraph) shall be included in all copies or substantial
portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE COPYRIGHT OWNER(S) AND/OR ITS SUPPLIERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/


enum dsi_traffic_mode {
	NON_BURST_SYNCH_PULSE = 0,
	NON_BURST_SYNCH_EVENT = 1,
	BURST_MODE = 2,
};

enum dsi_dst_format {
	DST_FORMAT_RGB565 = 0,
	DST_FORMAT_RGB666 = 1,
	DST_FORMAT_RGB666_LOOSE = 2,
	DST_FORMAT_RGB888 = 3,
};

enum dsi_rgb_swap {
	SWAP_RGB = 0,
	SWAP_RBG = 1,
	SWAP_BGR = 2,
	SWAP_BRG = 3,
	SWAP_GRB = 4,
	SWAP_GBR = 5,
};

enum dsi_cmd_trigger {
	TRIGGER_NONE = 0,
	TRIGGER_TE = 2,
	TRIGGER_SW = 4,
	TRIGGER_SW_SEOF = 5,
	TRIGGER_SW_TE = 6,
};

#define DSI_IRQ_CMD_DMA_DONE					0x00000001
#define DSI_IRQ_MASK_CMD_DMA_DONE				0x00000002
#define DSI_IRQ_CMD_MDP_DONE					0x00000100
#define DSI_IRQ_MASK_CMD_MDP_DONE				0x00000200
#define DSI_IRQ_VIDEO_DONE					0x00010000
#define DSI_IRQ_MASK_VIDEO_DONE					0x00020000
#define DSI_IRQ_ERROR						0x01000000
#define DSI_IRQ_MASK_ERROR					0x02000000
#define REG_DSI_CTRL						0x00000000
#define DSI_CTRL_ENABLE						0x00000001
#define DSI_CTRL_VID_MODE_EN					0x00000002
#define DSI_CTRL_CMD_MODE_EN					0x00000004
#define DSI_CTRL_LANE0						0x00000010
#define DSI_CTRL_LANE1						0x00000020
#define DSI_CTRL_LANE2						0x00000040
#define DSI_CTRL_LANE3						0x00000080
#define DSI_CTRL_CLK_EN						0x00000100
#define DSI_CTRL_ECC_CHECK					0x00100000
#define DSI_CTRL_CRC_CHECK					0x01000000

#define REG_DSI_STATUS0						0x00000004
#define DSI_STATUS0_CMD_MODE_DMA_BUSY				0x00000002
#define DSI_STATUS0_VIDEO_MODE_ENGINE_BUSY			0x00000008
#define DSI_STATUS0_DSI_BUSY					0x00000010

#define REG_DSI_FIFO_STATUS					0x00000008

#define REG_DSI_VID_CFG0					0x0000000c
#define DSI_VID_CFG0_VIRT_CHANNEL__MASK				0x00000003
#define DSI_VID_CFG0_VIRT_CHANNEL__SHIFT			0
static inline uint32_t DSI_VID_CFG0_VIRT_CHANNEL(uint32_t val)
{
	return ((val) << DSI_VID_CFG0_VIRT_CHANNEL__SHIFT) & DSI_VID_CFG0_VIRT_CHANNEL__MASK;
}
#define DSI_VID_CFG0_DST_FORMAT__MASK				0x00000030
#define DSI_VID_CFG0_DST_FORMAT__SHIFT				4
static inline uint32_t DSI_VID_CFG0_DST_FORMAT(enum dsi_dst_format val)
{
	return ((val) << DSI_VID_CFG0_DST_FORMAT__SHIFT) & DSI_VID_CFG0_DST_FORMAT__MASK;
}
#define DSI_VID_CFG0_TRAFFIC_MODE__MASK				0x00000300
#define DSI_VID_CFG0_TRAFFIC_MODE__SHIFT			8
static inline uint32_t DSI_VID_CFG0_TRAFFIC_MODE(enum dsi_traffic_mode val)
{
	return ((val) << DSI_VID_CFG0_TRAFFIC_MODE__SHIFT) & DSI_VID_CFG0_TRAFFIC_MODE__MASK;
}
#define DSI_VID_CFG0_BLLP_POWER_STOP				0x00001000
#define DSI_VID_CFG0_EOF_BLLP_POWER_STOP			0x00008000
#define DSI_VID_CFG0_HSA_POWER_STOP				0x00010000
#define DSI_VID_CFG0_HBP_POWER_STOP				0x00100000
#define DSI_VID_CFG0_HFP_POWER_STOP				0x01000000
#define DSI_VID_CFG0_PULSE_MODE_HSA_HE				0x10000000

#define REG_DSI_VID_CFG1					0x0000001c
#define DSI_VID_CFG1_R_SEL					0x00000010
#define DSI_VID_CFG1_G_SEL					0x00000100
#define DSI_VID_CFG1_B_SEL					0x00001000
#define DSI_VID_CFG1_RGB_SWAP__MASK				0x00070000
#define DSI_VID_CFG1_RGB_SWAP__SHIFT				16
static inline uint32_t DSI_VID_CFG1_RGB_SWAP(enum dsi_rgb_swap val)
{
	return ((val) << DSI_VID_CFG1_RGB_SWAP__SHIFT) & DSI_VID_CFG1_RGB_SWAP__MASK;
}
#define DSI_VID_CFG1_INTERLEAVE_MAX__MASK			0x00f00000
#define DSI_VID_CFG1_INTERLEAVE_MAX__SHIFT			20
static inline uint32_t DSI_VID_CFG1_INTERLEAVE_MAX(uint32_t val)
{
	return ((val) << DSI_VID_CFG1_INTERLEAVE_MAX__SHIFT) & DSI_VID_CFG1_INTERLEAVE_MAX__MASK;
}

#define REG_DSI_ACTIVE_H					0x00000020
#define DSI_ACTIVE_H_START__MASK				0x00000fff
#define DSI_ACTIVE_H_START__SHIFT				0
static inline uint32_t DSI_ACTIVE_H_START(uint32_t val)
{
	return ((val) << DSI_ACTIVE_H_START__SHIFT) & DSI_ACTIVE_H_START__MASK;
}
#define DSI_ACTIVE_H_END__MASK					0x0fff0000
#define DSI_ACTIVE_H_END__SHIFT					16
static inline uint32_t DSI_ACTIVE_H_END(uint32_t val)
{
	return ((val) << DSI_ACTIVE_H_END__SHIFT) & DSI_ACTIVE_H_END__MASK;
}

#define REG_DSI_ACTIVE_V					0x00000024
#define DSI_ACTIVE_V_START__MASK				0x00000fff
#define DSI_ACTIVE_V_START__SHIFT				0
static inline uint32_t DSI_ACTIVE_V_START(uint32_t val)
{
	return ((val) << DSI_ACTIVE_V_START__SHIFT) & DSI_ACTIVE_V_START__MASK;
}
#define DSI_ACTIVE_V_END__MASK					0x0fff0000
#define DSI_ACTIVE_V_END__SHIFT					16
static inline uint32_t DSI_ACTIVE_V_END(uint32_t val)
{
	return ((val) << DSI_ACTIVE_V_END__SHIFT) & DSI_ACTIVE_V_END__MASK;
}

#define REG_DSI_TOTAL						0x00000028
#define DSI_TOTAL_H_TOTAL__MASK					0x00000fff
#define DSI_TOTAL_H_TOTAL__SHIFT				0
static inline uint32_t DSI_TOTAL_H_TOTAL(uint32_t val)
{
	return ((val) << DSI_TOTAL_H_TOTAL__SHIFT) & DSI_TOTAL_H_TOTAL__MASK;
}
#define DSI_TOTAL_V_TOTAL__MASK					0x0fff0000
#define DSI_TOTAL_V_TOTAL__SHIFT				16
static inline uint32_t DSI_TOTAL_V_TOTAL(uint32_t val)
{
	return ((val) << DSI_TOTAL_V_TOTAL__SHIFT) & DSI_TOTAL_V_TOTAL__MASK;
}

#define REG_DSI_ACTIVE_HSYNC					0x0000002c
#define DSI_ACTIVE_HSYNC_START__MASK				0x00000fff
#define DSI_ACTIVE_HSYNC_START__SHIFT				0
static inline uint32_t DSI_ACTIVE_HSYNC_START(uint32_t val)
{
	return ((val) << DSI_ACTIVE_HSYNC_START__SHIFT) & DSI_ACTIVE_HSYNC_START__MASK;
}
#define DSI_ACTIVE_HSYNC_END__MASK				0x0fff0000
#define DSI_ACTIVE_HSYNC_END__SHIFT				16
static inline uint32_t DSI_ACTIVE_HSYNC_END(uint32_t val)
{
	return ((val) << DSI_ACTIVE_HSYNC_END__SHIFT) & DSI_ACTIVE_HSYNC_END__MASK;
}

#define REG_DSI_ACTIVE_VSYNC					0x00000034
#define DSI_ACTIVE_VSYNC_START__MASK				0x00000fff
#define DSI_ACTIVE_VSYNC_START__SHIFT				0
static inline uint32_t DSI_ACTIVE_VSYNC_START(uint32_t val)
{
	return ((val) << DSI_ACTIVE_VSYNC_START__SHIFT) & DSI_ACTIVE_VSYNC_START__MASK;
}
#define DSI_ACTIVE_VSYNC_END__MASK				0x0fff0000
#define DSI_ACTIVE_VSYNC_END__SHIFT				16
static inline uint32_t DSI_ACTIVE_VSYNC_END(uint32_t val)
{
	return ((val) << DSI_ACTIVE_VSYNC_END__SHIFT) & DSI_ACTIVE_VSYNC_END__MASK;
}

#define REG_DSI_CMD_DMA_CTRL					0x00000038
#define DSI_CMD_DMA_CTRL_FROM_FRAME_BUFFER			0x10000000
#define DSI_CMD_DMA_CTRL_LOW_POWER				0x04000000

#define REG_DSI_CMD_CFG0					0x0000003c

#define REG_DSI_CMD_CFG1					0x00000040

#define REG_DSI_DMA_BASE					0x00000044

#define REG_DSI_DMA_LEN						0x00000048

#define REG_DSI_ACK_ERR_STATUS					0x00000064

static inline uint32_t REG_DSI_RDBK(uint32_t i0) { return 0x00000068 + 0x4*i0; }

static inline uint32_t REG_DSI_RDBK_DATA(uint32_t i0) { return 0x00000068 + 0x4*i0; }

#define REG_DSI_TRIG_CTRL					0x00000080
#define DSI_TRIG_CTRL_DMA_TRIGGER__MASK				0x0000000f
#define DSI_TRIG_CTRL_DMA_TRIGGER__SHIFT			0
static inline uint32_t DSI_TRIG_CTRL_DMA_TRIGGER(enum dsi_cmd_trigger val)
{
	return ((val) << DSI_TRIG_CTRL_DMA_TRIGGER__SHIFT) & DSI_TRIG_CTRL_DMA_TRIGGER__MASK;
}
#define DSI_TRIG_CTRL_MDP_TRIGGER__MASK				0x000000f0
#define DSI_TRIG_CTRL_MDP_TRIGGER__SHIFT			4
static inline uint32_t DSI_TRIG_CTRL_MDP_TRIGGER(enum dsi_cmd_trigger val)
{
	return ((val) << DSI_TRIG_CTRL_MDP_TRIGGER__SHIFT) & DSI_TRIG_CTRL_MDP_TRIGGER__MASK;
}
#define DSI_TRIG_CTRL_STREAM					0x00000100
#define DSI_TRIG_CTRL_TE					0x80000000

#define REG_DSI_TRIG_DMA					0x0000008c

#define REG_DSI_DLN0_PHY_ERR					0x000000b0

#define REG_DSI_TIMEOUT_STATUS					0x000000bc

#define REG_DSI_CLKOUT_TIMING_CTRL				0x000000c0
#define DSI_CLKOUT_TIMING_CTRL_T_CLK_PRE__MASK			0x0000003f
#define DSI_CLKOUT_TIMING_CTRL_T_CLK_PRE__SHIFT			0
static inline uint32_t DSI_CLKOUT_TIMING_CTRL_T_CLK_PRE(uint32_t val)
{
	return ((val) << DSI_CLKOUT_TIMING_CTRL_T_CLK_PRE__SHIFT) & DSI_CLKOUT_TIMING_CTRL_T_CLK_PRE__MASK;
}
#define DSI_CLKOUT_TIMING_CTRL_T_CLK_POST__MASK			0x00003f00
#define DSI_CLKOUT_TIMING_CTRL_T_CLK_POST__SHIFT		8
static inline uint32_t DSI_CLKOUT_TIMING_CTRL_T_CLK_POST(uint32_t val)
{
	return ((val) << DSI_CLKOUT_TIMING_CTRL_T_CLK_POST__SHIFT) & DSI_CLKOUT_TIMING_CTRL_T_CLK_POST__MASK;
}

#define REG_DSI_EOT_PACKET_CTRL					0x000000c8
#define DSI_EOT_PACKET_CTRL_TX_EOT_APPEND			0x00000001
#define DSI_EOT_PACKET_CTRL_RX_EOT_IGNORE			0x00000010

#define REG_DSI_LANE_SWAP_CTRL					0x000000ac

#define REG_DSI_ERR_INT_MASK0					0x00000108

#define REG_DSI_INTR_CTRL					0x0000010c

#define REG_DSI_RESET						0x00000114

#define REG_DSI_CLK_CTRL					0x00000118

#define REG_DSI_PHY_RESET					0x00000128

#define REG_DSI_PHY_PLL_CTRL_0					0x00000200
#define DSI_PHY_PLL_CTRL_0_ENABLE				0x00000001

#define REG_DSI_PHY_PLL_CTRL_1					0x00000204

#define REG_DSI_PHY_PLL_CTRL_2					0x00000208

#define REG_DSI_PHY_PLL_CTRL_3					0x0000020c

#define REG_DSI_PHY_PLL_CTRL_4					0x00000210

#define REG_DSI_PHY_PLL_CTRL_5					0x00000214

#define REG_DSI_PHY_PLL_CTRL_6					0x00000218

#define REG_DSI_PHY_PLL_CTRL_7					0x0000021c

#define REG_DSI_PHY_PLL_CTRL_8					0x00000220

#define REG_DSI_PHY_PLL_CTRL_9					0x00000224

#define REG_DSI_PHY_PLL_CTRL_10					0x00000228

#define REG_DSI_PHY_PLL_CTRL_11					0x0000022c

#define REG_DSI_PHY_PLL_CTRL_12					0x00000230

#define REG_DSI_PHY_PLL_CTRL_13					0x00000234

#define REG_DSI_PHY_PLL_CTRL_14					0x00000238

#define REG_DSI_PHY_PLL_CTRL_15					0x0000023c

#define REG_DSI_PHY_PLL_CTRL_16					0x00000240

#define REG_DSI_PHY_PLL_CTRL_17					0x00000244

#define REG_DSI_PHY_PLL_CTRL_18					0x00000248

#define REG_DSI_PHY_PLL_CTRL_19					0x0000024c

#define REG_DSI_PHY_PLL_CTRL_20					0x00000250

#define REG_DSI_PHY_PLL_STATUS					0x00000280
#define DSI_PHY_PLL_STATUS_PLL_BUSY				0x00000001

#define REG_DSI_8x60_PHY_TPA_CTRL_1				0x00000258

#define REG_DSI_8x60_PHY_TPA_CTRL_2				0x0000025c

#define REG_DSI_8x60_PHY_TIMING_CTRL_0				0x00000260

#define REG_DSI_8x60_PHY_TIMING_CTRL_1				0x00000264

#define REG_DSI_8x60_PHY_TIMING_CTRL_2				0x00000268

#define REG_DSI_8x60_PHY_TIMING_CTRL_3				0x0000026c

#define REG_DSI_8x60_PHY_TIMING_CTRL_4				0x00000270

#define REG_DSI_8x60_PHY_TIMING_CTRL_5				0x00000274

#define REG_DSI_8x60_PHY_TIMING_CTRL_6				0x00000278

#define REG_DSI_8x60_PHY_TIMING_CTRL_7				0x0000027c

#define REG_DSI_8x60_PHY_TIMING_CTRL_8				0x00000280

#define REG_DSI_8x60_PHY_TIMING_CTRL_9				0x00000284

#define REG_DSI_8x60_PHY_TIMING_CTRL_10				0x00000288

#define REG_DSI_8x60_PHY_TIMING_CTRL_11				0x0000028c

#define REG_DSI_8x60_PHY_CTRL_0					0x00000290

#define REG_DSI_8x60_PHY_CTRL_1					0x00000294

#define REG_DSI_8x60_PHY_CTRL_2					0x00000298

#define REG_DSI_8x60_PHY_CTRL_3					0x0000029c

#define REG_DSI_8x60_PHY_STRENGTH_0				0x000002a0

#define REG_DSI_8x60_PHY_STRENGTH_1				0x000002a4

#define REG_DSI_8x60_PHY_STRENGTH_2				0x000002a8

#define REG_DSI_8x60_PHY_STRENGTH_3				0x000002ac

#define REG_DSI_8x60_PHY_REGULATOR_CTRL_0			0x000002cc

#define REG_DSI_8x60_PHY_REGULATOR_CTRL_1			0x000002d0

#define REG_DSI_8x60_PHY_REGULATOR_CTRL_2			0x000002d4

#define REG_DSI_8x60_PHY_REGULATOR_CTRL_3			0x000002d8

#define REG_DSI_8x60_PHY_REGULATOR_CTRL_4			0x000002dc

#define REG_DSI_8x60_PHY_CAL_HW_TRIGGER				0x000000f0

#define REG_DSI_8x60_PHY_CAL_CTRL				0x000000f4

#define REG_DSI_8x60_PHY_CAL_STATUS				0x000000fc
#define DSI_8x60_PHY_CAL_STATUS_CAL_BUSY			0x10000000

static inline uint32_t REG_DSI_8960_LN(uint32_t i0) { return 0x00000300 + 0x40*i0; }

static inline uint32_t REG_DSI_8960_LN_CFG_0(uint32_t i0) { return 0x00000300 + 0x40*i0; }

static inline uint32_t REG_DSI_8960_LN_CFG_1(uint32_t i0) { return 0x00000304 + 0x40*i0; }

static inline uint32_t REG_DSI_8960_LN_CFG_2(uint32_t i0) { return 0x00000308 + 0x40*i0; }

static inline uint32_t REG_DSI_8960_LN_TEST_DATAPATH(uint32_t i0) { return 0x0000030c + 0x40*i0; }

static inline uint32_t REG_DSI_8960_LN_TEST_STR_0(uint32_t i0) { return 0x00000314 + 0x40*i0; }

static inline uint32_t REG_DSI_8960_LN_TEST_STR_1(uint32_t i0) { return 0x00000318 + 0x40*i0; }

#define REG_DSI_8960_PHY_LNCK_CFG_0				0x00000400

#define REG_DSI_8960_PHY_LNCK_CFG_1				0x00000404

#define REG_DSI_8960_PHY_LNCK_CFG_2				0x00000408

#define REG_DSI_8960_PHY_LNCK_TEST_DATAPATH			0x0000040c

#define REG_DSI_8960_PHY_LNCK_TEST_STR0				0x00000414

#define REG_DSI_8960_PHY_LNCK_TEST_STR1				0x00000418

#define REG_DSI_8960_PHY_TIMING_CTRL_0				0x00000440

#define REG_DSI_8960_PHY_TIMING_CTRL_1				0x00000444

#define REG_DSI_8960_PHY_TIMING_CTRL_2				0x00000448

#define REG_DSI_8960_PHY_TIMING_CTRL_3				0x0000044c

#define REG_DSI_8960_PHY_TIMING_CTRL_4				0x00000450

#define REG_DSI_8960_PHY_TIMING_CTRL_5				0x00000454

#define REG_DSI_8960_PHY_TIMING_CTRL_6				0x00000458

#define REG_DSI_8960_PHY_TIMING_CTRL_7				0x0000045c

#define REG_DSI_8960_PHY_TIMING_CTRL_8				0x00000460

#define REG_DSI_8960_PHY_TIMING_CTRL_9				0x00000464

#define REG_DSI_8960_PHY_TIMING_CTRL_10				0x00000468

#define REG_DSI_8960_PHY_TIMING_CTRL_11				0x0000046c

#define REG_DSI_8960_PHY_CTRL_0					0x00000470

#define REG_DSI_8960_PHY_CTRL_1					0x00000474

#define REG_DSI_8960_PHY_CTRL_2					0x00000478

#define REG_DSI_8960_PHY_CTRL_3					0x0000047c

#define REG_DSI_8960_PHY_STRENGTH_0				0x00000480

#define REG_DSI_8960_PHY_STRENGTH_1				0x00000484

#define REG_DSI_8960_PHY_STRENGTH_2				0x00000488

#define REG_DSI_8960_PHY_BIST_CTRL_0				0x0000048c

#define REG_DSI_8960_PHY_BIST_CTRL_1				0x00000490

#define REG_DSI_8960_PHY_BIST_CTRL_2				0x00000494

#define REG_DSI_8960_PHY_BIST_CTRL_3				0x00000498

#define REG_DSI_8960_PHY_BIST_CTRL_4				0x0000049c

#define REG_DSI_8960_PHY_LDO_CTRL				0x000004b0

#define REG_DSI_8960_PHY_REGULATOR_CTRL_0			0x00000500

#define REG_DSI_8960_PHY_REGULATOR_CTRL_1			0x00000504

#define REG_DSI_8960_PHY_REGULATOR_CTRL_2			0x00000508

#define REG_DSI_8960_PHY_REGULATOR_CTRL_3			0x0000050c

#define REG_DSI_8960_PHY_REGULATOR_CTRL_4			0x00000510

#define REG_DSI_8960_PHY_REGULATOR_CAL_PWR_CFG			0x00000518

#define REG_DSI_8960_PHY_CAL_HW_TRIGGER				0x00000528

#define REG_DSI_8960_PHY_CAL_SW_CFG_0				0x0000052c

#define REG_DSI_8960_PHY_CAL_SW_CFG_1				0x00000530

#define REG_DSI_8960_PHY_CAL_SW_CFG_2				0x00000534

#define REG_DSI_8960_PHY_CAL_HW_CFG_0				0x00000538

#define REG_DSI_8960_PHY_CAL_HW_CFG_1				0x0000053c

#define REG_DSI_8960_PHY_CAL_HW_CFG_2				0x00000540

#define REG_DSI_8960_PHY_CAL_HW_CFG_3				0x00000544

#define REG_DSI_8960_PHY_CAL_HW_CFG_4				0x00000548

#define REG_DSI_8960_PHY_CAL_STATUS				0x00000550
#define DSI_8960_PHY_CAL_STATUS_CAL_BUSY			0x00000010


#endif /* DSI_XML */
