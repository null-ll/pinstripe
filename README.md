# Pinstripe

![Pinstripe](https://i.imgur.com/yUHyV73.jpg)
***Not everything has been implemented/tested fully. Build at your own risk!***

Through-hole 60% keyboard with arrow keys, a rotary encoder, a SSD1306 OLED display, and a DS1307 I2C RTC module.




### Supported Layouts
![Layout](https://i.imgur.com/j5zc8Iz.png)
> View on [Keyboard Layout Editor](http://www.keyboard-layout-editor.com/#/gists/76d009fbf60b83c250d901e28f7cc0d1)

### BOM
| Ref     | Component              | Qty | Notes |
| ---     | ---------              | --- | ----- |
| C1, C2  | 22pF Capacitor         | 2 
| C3, C4  | 0.1uF Capacitor        | 2
| C5      | 4.7uF Capacitor        | 1 
| D1-66, D71 | 1n4148 Diode        | 68
| D67, D68 | 3.6V Zener Diode      | 2  | Keep separate from the 1n4148 diodes
| FUSE    | 500mA Resettable fuse  | 1
| ISP     | 6 pin header           | 1
| USB     | GCT USB4085 USB C port | 1
| POWER   | 3mm LED                | 1
| R1, R2  | 1.5k Resistor          | 2 
| R3, R6  | 5.1k Resistor          | 2 
| R4, R5  | 75 Resistor            | 2 
| R7      | 10k Resistor           | 1 
| U1      | ATmega32A              | 1
|         | 40 pin IC socket       | 1
| RESET, BOOT | 6mm push button    | 1
| Y1      | 16MHz Crystal          | 1
| ROTARY ENCODER | EC11 Rotary encoder | 1
| OLED    | SSD1306 128x64 OLED    | 1 | Make sure the pins are in the order GND, VCC, SCL, SDA from left to right. Some versions have the pins arranged differently.
| DS1307  | Adafruit DS1307 Module | 1
|         | Knob                   | 1
|         | CR1220 Battery         | 1 | Battery for RTC
|         | M2 6mm standoff        | 10
|         | M2 10+3mm standoff     | 5
|         | M2 6mm screw           | 5
|         | M2 4mm screw           | 15
|         | Rubber Feet            | 4
|         | Pinstripe PCB          | 1
|         | Bottom Plate           | 1
|         | Switch plate           | 1
|         | Acrylic guard          | 1
|         | Acrylic OLED cover     | 1 

### Build Guide
WIP

### Images
![Front](https://i.imgur.com/zxUP374.jpg)
![Back](https://i.imgur.com/iYaOw6d.jpg)
![OLED](https://i.imgur.com/Nr2kXRJ.jpg)
![Full](https://i.imgur.com/zxUP374.jpg)
