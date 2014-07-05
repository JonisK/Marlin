/* 
	Editor: http://www.visualmicro.com
	        visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
	        the contents of the Visual Micro sketch sub folder can be deleted prior to publishing a project
	        all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
	        note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: Arduino Mega w/ ATmega2560 (Mega 2560), Platform=avr, Package=arduino
*/

#define __AVR_ATmega2560__
#define ARDUINO 101
#define ARDUINO_MAIN
#define F_CPU 16000000L
#define __AVR__
#define __cplusplus
extern "C" void __cxa_pure_virtual() {;}


#include "C:\Program Files\Arduino\hardware\arduino\avr\variants\mega\pins_arduino.h" 
#include "C:\Program Files\Arduino\hardware\arduino\avr\cores\arduino\arduino.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\Marlin.pde"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\BlinkM.cpp"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\BlinkM.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\Configuration.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\ConfigurationStore.cpp"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\ConfigurationStore.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\Configuration_adv.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\DOGMbitmaps.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\LiquidCrystalRus.cpp"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\LiquidCrystalRus.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\Marlin.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\Marlin.ino"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\MarlinSerial.cpp"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\MarlinSerial.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\Marlin_main.cpp"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\Sd2Card.cpp"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\Sd2Card.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\Sd2PinMap.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\SdBaseFile.cpp"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\SdBaseFile.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\SdFatConfig.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\SdFatStructs.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\SdFatUtil.cpp"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\SdFatUtil.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\SdFile.cpp"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\SdFile.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\SdInfo.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\SdVolume.cpp"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\SdVolume.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\Servo.cpp"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\Servo.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\cardreader.cpp"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\cardreader.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\digipot_mcp4451.cpp"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\dogm_font_data_marlin.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\dogm_lcd_implementation.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\fastio.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\language.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\motion_control.cpp"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\motion_control.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\pins.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\planner.cpp"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\planner.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\qr_solve.cpp"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\qr_solve.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\speed_lookuptable.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\stepper.cpp"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\stepper.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\temperature.cpp"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\temperature.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\thermistortables.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\ultralcd.cpp"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\ultralcd.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\ultralcd_implementation_hitachi_HD44780.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\ultralcd_st7920_u8glib_rrd.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\vector_3.cpp"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\vector_3.h"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\watchdog.cpp"
#include "C:\Users\Jonis\Documents\GitHub\Marlin\Marlin\watchdog.h"
