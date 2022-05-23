/*!
	@file   iframework.h
	@brief  <brief description here>
	@t.odo	-
	---------------------------------------------------------------------------

	MIT License
	Copyright (c) 2021 Io. D (Devcoons)

	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in all
	copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
	SOFTWARE.
*/
/******************************************************************************
* Preprocessor Definitions & Macros
******************************************************************************/

#ifndef IFRAMEWORK_H_
#define IFRAMEWORK_H_

/******************************************************************************
* Includes
******************************************************************************/

#if __has_include("definitions.h")
#include "definitions.h"
#else
#error "Missing: `definitions.h` file"
#endif

/******************************************************************************
* Includes - Framework Drivers
******************************************************************************/

#if __has_include("drv_flash.h")
#include "drv_flash.h"
#endif

#if __has_include("drv_canbus.h")
#include "drv_canbus.h"
#endif

#if __has_include("drv_uart.h")
#include "drv_uart.h"
#endif	

#if __has_include("drv_adc.h")
#include "drv_adc.h"
#endif

#if __has_include("drv_spi.h")
#include "drv_spi.h"
#endif

#if __has_include("drv_gpio.h")
#include "drv_gpio.h"
#endif

#if __has_include("drv_pwm.h")
#include "drv_pwm.h"
#endif

#if __has_include("drv_pwrc.h")
#include "drv_pwrc.h"
#endif

#if __has_include("drv_usb.h")
#include "drv_usb.h"
#endif

#if __has_include("drv_rtc.h")
#include "drv_rtc.h"
#endif

#if __has_include("drv_eeprom.h")
#include "drv_eeprom.h"
#endif

#if __has_include("drv_spi_flash.h")
#include "drv_spi_flash.h"
#endif

#if __has_include("drv_bq79606aq1.h")
#include "drv_bq79606aq1.h"
#endif

#if __has_include("drv_sigmadelta.h")
#include "drv_sigmadelta.h"
#endif

/******************************************************************************
* Includes - Framework Libraries
******************************************************************************/

#if __has_include("lib_iqueue.h")
#include "lib_iqueue.h"
#endif

#if __has_include("lib_rnd.h")
#include "lib_rnd.h"
#endif	

#if __has_include("lib_crypto.h")
#include "lib_crypto.h"
#endif

#if __has_include("lib_iso15765.h")
#include "lib_iso15765.h"
#endif

#if __has_include("lib_iso14229.h")
#include "lib_iso14229.h"
#endif

#if __has_include("lib_ifm.h")
#include "lib_ifm.h"
#endif

#if __has_include("lib_intercom.h")
#include "lib_intercom.h"
#endif

#if __has_include("lib_swcp.h")
#include "lib_swcp.h"
#endif

#if __has_include("lib_efbn.h")
#include "lib_efbn.h"
#endif

#if __has_include("lib_chronos.h")
#include "lib_chronos.h"
#endif

#if __has_include("lib_jmp.h")
#include "lib_jmp.h"
#endif

#if __has_include("lib_data.h")
#include "lib_data.h"
#endif

/******************************************************************************
* Includes - Framework Tasks
******************************************************************************/

#if __has_include("tsk_uds.h")
#include "tsk_uds.h"
#endif

#if __has_include("basecode_tsks.h")
#include "basecode_tsks.h"
#endif

#if __has_include("appcode_tsks.h")
#include "appcode_tsks.h"
#endif

/******************************************************************************
* EOF - NO CODE AFTER THIS LINE
******************************************************************************/
#endif
