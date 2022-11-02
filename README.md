# EasyKeyDublicatorRFID_OLED
Simple RFID (EM-Marin (yes, like that)) and wired (Dallas, Cyfral, Metacom) key duplicator with arduino. Supports EM4305, T5577, RW-1990.1 RW-1990.2 TM-01 TM2004 protocols. There are connection schemes in the project.
Baud rate: 115200.

# New features
Better translations! Ain't that what-cha want?
Manual code adding too. HOMEMADE UNIVERSAL KEYS!!! LET'S GO!!!
I'm finding out whether A1 TM emulation works.

# How to use

## Key interaction

### To read a key:
Tap the key to the TM/RFID reader, whatever is appropriate for your key.

### To save a key:
Hold down the encoder button (D8 to GND). A confirmation signal will be given.

### To write a key:
Click the encoder button until the RED (D2) LED is on. Tap the target key to the appropriate reader and wait for confirmation. If it fails, try again.

### To simulate RFID tags (DOES NOT ALWAYS WORK):
Click the encoder button until the BLUE LED (D4) is on. Then, approach your copier to the reader. 

## EEPROM interaction

### Choose a key
Scroll the encoder.

### Save a key from readback
Tap the original key to the reader. Then, hold the encoder button to save. Wait for a confirmation tone.

### Clear EEPROM
Send `e` in serial monitor. 
**DANGER!** If you do not wait for the OLED screen to reset, you risk bricking the Arduino.
*okay, quick edit - I think that was just a bug of my chinese arduino bootloader, so, just so you know. it never happened again.*

## Other interactions

### Manually toggle Writeflag
Send `t` in serial monitor.
