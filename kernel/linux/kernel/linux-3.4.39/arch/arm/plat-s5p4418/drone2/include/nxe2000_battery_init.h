/*
 * nxe2000_battery_init.h
 *
 *  Copyright (C) 2013 Nexell
 *  bong kwan kook <kook@nexell.co.kr>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 */
#ifndef __LINUX_POWER_NXE2000_BATTERY_INIT_H
#define __LINUX_POWER_NXE2000_BATTERY_INIT_H

/* Capacity             : 3000mAh */
/* Cut-off Voltage      : 3.4V */
/* Thermistor B Value   : 3435 */
/* Board Impedance      : 0 ohm */

uint8_t battery_init_para[][32] = {
#if 0   // org
	[0]={
		0x08, 0xa3, 0x0a, 0xf9, 0x0b, 0x4b, 0x0b, 0x74,
		0x0b, 0x94, 0x0b, 0xb5, 0x0b, 0xe6, 0x0c, 0x30,
		0x0c, 0x92, 0x0c, 0xf4, 0x0d, 0x6f, 0x08, 0xca,
		0x00, 0x36, 0x0f, 0xc8, 0x05, 0x2c, 0x22, 0x56
	},
#endif
#if 0   // 20131203
	[0]={
		0x0B, 0x36, 0x0B, 0xC9, 0x0B, 0xF2, 0x0C, 0x08,
		0x0C, 0x1A, 0x0C, 0x31, 0x0C, 0x57, 0x0C, 0x8C,
		0x0C, 0xBF, 0x0C, 0xFD, 0x0D, 0x54, 0x0A, 0xD4,
		0x00, 0x3E, 0x0F, 0xC8, 0x05, 0x2C, 0x22, 0x56
	},
#endif
#if 0   // 20131205
	[0]={
		0x0B, 0x38, 0x0B, 0xC5, 0x0B, 0xEF, 0x0C, 0x06,
		0x0C, 0x17, 0x0C, 0x2F, 0x0C, 0x53, 0x0C, 0x88,
		0x0C, 0xBE, 0x0C, 0xFB, 0x0D, 0x53, 0x0A, 0xFA,
		0x00, 0x41, 0x0F, 0xC8, 0x05, 0x2C, 0x22, 0x56
	},
#endif
#if 0	// 20131219
	[0]={
		0x0B, 0x34, 0x0B, 0xC1, 0x0B, 0xEB, 0x0C, 0x05,
		0x0C, 0x18, 0x0C, 0x2F, 0x0C, 0x53, 0x0C, 0x8A,
		0x0C, 0xBF, 0x0C, 0xFD, 0x0D, 0x55, 0x0A, 0xB8,
		0x00, 0x3C, 0x0F, 0xC8, 0x05, 0x2C, 0x22, 0x56
	},
#endif

#if 0	// 20140603  2600mah
	[0]={
		0x0B, 0x2A, 0x0B, 0xCC, 0x0B, 0xF3, 0x0C, 0x0D, 
        0x0C, 0x20, 0x0C, 0x36, 0x0C, 0x5E, 0x0C, 0x90,
        0x0C, 0xC1, 0x0C, 0xFC, 0x0D, 0x52, 0x09, 0x55, 
        0x00, 0x49, 0x0F, 0xC8, 0x05, 0x2C, 0x22, 0x56
	},
#endif

#if 0  //20140620 3000mah
     [0]={
        0x0B, 0x68, 0x0B, 0xCD, 0x0B, 0xF9, 0x0C, 0x0D, 
        0x0C, 0x1E, 0x0C, 0x35, 0x0C, 0x5D, 0x0C, 0x93,
        0x0C, 0xC6, 0x0D, 0x03, 0x0D, 0x52, 0x0B, 0x33, 
        0x00, 0x4F, 0x0F, 0xC8, 0x05, 0x2C, 0x22, 0x56
     },
#endif
#if 0 // 20141208 3000mah, 3200mV
     [0]={
        0x0B, 0x1A, 0x0B, 0xB6, 0x0B, 0xDE, 0x0C, 0x01, 0x0C, 0x11, 0x0C, 0x24, 0x0C, 0x43, 0x0C, 0x73,
        0x0C, 0xA9, 0x0C, 0xE5, 0x0D, 0x48, 0x0A, 0x9D, 0x00, 0x5F, 0x0F, 0xC8, 0x05, 0x2C, 0x22, 0x56
     },
#endif
#if 1 // 20141214 3000mah, 3200mV
     [0]={
        0x0A, 0xB6, 0x0B, 0xB6, 0x0B, 0xE2, 0x0C, 0x03, 0x0C, 0x11, 0x0C, 0x26, 0x0C, 0x49, 0x0C, 0x80,
        0x0C, 0xB5, 0x0C, 0xF3, 0x0D, 0x4B, 0x0C, 0x19, 0x00, 0x4F, 0x0F, 0xC8, 0x05, 0x2C, 0x22, 0x56
     },
#endif
};


#define NXE2000_CUTOFF_VOL			(0)		/* mV "0" means cutoff voltage = original OCV table value */
#define NXE2000_REL1_SEL_VALUE		(64)	/* mV Range 0~240 * (Step 16) */
#define NXE2000_REL2_SEL_VALUE		(0)		/* mV Range 0~120 * (Step 8) */
#define NXE2000_TARGET_VSYS			(3300)	/* mV */

#endif  // __LINUX_POWER_NXE2000_BATTERY_INIT_H
