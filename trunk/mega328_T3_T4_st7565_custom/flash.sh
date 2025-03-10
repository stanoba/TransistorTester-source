#!/bin/bash
avrdude -v -p m328p -c usbasp -P usb -U flash:w:"mega328_T3_T4_st7565_custom.hex":i -U eeprom:w:"mega328_T3_T4_st7565_custom.eep":i