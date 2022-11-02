/*

 * EEPROM Write

 *

 * Stores values read from analog input 0 into the EEPROM.

 * These values will stay in the EEPROM when the board is

 * turned off and may be retrieved later by another sketch.

 */

#include <EEPROM.h>

/** the current address in the EEPROM (i.e. which byte we're going to write to next) **/
int order=1; //Keep this within 1-20. Don't go beyond!
int addr = order*8;

void setup() {

  /** Empty setup. **/
}

void loop() {

  int hdr = 1; //0x01 = DS1990 (TM with sn), 0x0C=DS1996 (tm with SN and 64k eeprom)
  int b1 = 1;
  int b2 = 255;
  int b3 = 255;
  int b4 = 255;
  int b5 = 255;
  int b6 = 255;
  int crc = 47; //calculate this with OWCRC.exe
  
  /***

    Write the value to the appropriate byte of the EEPROM.

    these values will remain there when the board is

    turned off.

  ***/

  EEPROM.write(addr, hdr);
  EEPROM.write(addr+1, b1);
  EEPROM.write(addr+2, b2);
  EEPROM.write(addr+3, b3);
  EEPROM.write(addr+4, b4);
  EEPROM.write(addr+5, b5);
  EEPROM.write(addr+6, b6);
  EEPROM.write(addr+7, crc);
  
  delay(10000);
}
