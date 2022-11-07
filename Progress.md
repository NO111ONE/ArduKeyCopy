# Current progress

I'm not sure what to type here. Let me list what I am thinking about and how to implement it.

#### 5-byte HEX Em-Marin readback

This is simple IMO - grab the decimal value and print as hexadecimal. The original printout has next to no pattern that can be used for printing.

I found a datasheet! https://www.priority1design.com.au/em4100_protocol.html
Basically it's just binary hex characters which build the code: 1 byte for version and 4 for data.

#### iButton emulation

So far this code is literally /**/'d. I'm not sure if it's because it's not working, but nothing seems to say otherwise. After all, you are required to add OneWireSlave, that isn't commented out. I'll tune the code if necessary if I figure out how, and there's your DS1990-only emulator!

#### 2 byte Cyfral + 4 byte Metakom readback

Mexatron is a "genius" and got 5 bytes out of both formats instead of the corresponding 2 and 4. I'm sure there's also a pattern, but if not, I think I can figure it out.

DC2000 data: http://www.155la3.ru/datafiles/1233kt1.pdf
MT200X data: http://www.sitsemi.ru/kat/1233kt2.pdf


just go buy a Megakey, or even a flipper for the sake of it, I beg you - don't waste your time with this..
