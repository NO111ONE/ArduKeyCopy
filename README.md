# EasyKeyDublicatorRFID_OLED
Simple RFID (EM-Marin (yes, like that)) and wired (Dallas, Cyfral, Metacom) key duplicator with arduino. Supports EM4305, T5577, RW-1990.1 RW-1990.2 TM-01 TM2004 protocols. There are connection schemes in the project.
Baud rate: 115200.

A device (key) support list is given below.

| KEY | DALLAS | CYFRAL | METAKOM |
| --- | --- | --- | --- |
| RW1990 | RW | \- | \- |
| TM08 | RW | \- | \- |
| KC-4TM | RW | \- | \- |
| TM01 | RW* | R | R |
| RW2017 | - | R | R |
| RW15 | \- | R** | R |
| KC-07 | \- | X | X |

Do **NOT** attempt to program your TM01 keys with this yet!!! You WILL break them; this function is NOT yet properly added!

KC-07 does not read likely due to it using high voltage. 
RW15 requires this config: load resistor ON; speed is lower than "Very fast". RF chart below

| KEY | SUPPORT |
| --- | --- |
| ATA55XX | RW; EM-marin only; unlocked only |
| EM4305 | Unknown
| H5 | X |
| H7 | X |
| iKEY OTP | X |

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

### Get 5 byte RFID code
**This needs a PC!** For now.

Open the serial monitor and tap your tag to the reader. You will see data: `ID XXX key YYYYYYYYYY`. Convert these values to hex. The data is the code.

Example: VIZIT universal: 56:5A:11:40:BE = 86 + 1511080126
