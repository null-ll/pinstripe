# Pinstripe

![Full](https://i.imgur.com/zxUP374.jpg)
***Not everything has been implemented/tested fully. Build at your own risk!***

Through-hole 60% keyboard with arrow keys, a rotary encoder, a SSD1306 OLED display, and a DS1307 I2C RTC module.

OLED displays 24-hour time and [bongo cat animation](https://github.com/nwii/oledbongocat) in default keymap. 


## Supported Layouts
![Layout](https://i.imgur.com/j5zc8Iz.png)
> View on [Keyboard Layout Editor](http://www.keyboard-layout-editor.com/#/gists/76d009fbf60b83c250d901e28f7cc0d1)

### Default Layout
> View on [Keyboard Layout Editor](http://www.keyboard-layout-editor.com/#/gists/a1eb12ef4bd2b7b5ea2a67abed068752)

## BOM
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
|         | M2 10+3mm standoff     | 5 | For mounting the acrylic guard
|         | M2 6mm screw           | 5 | For mounting the acrylic guard
|         | M2 6mm standoff        | 10 | Holds the PCB and bottom plate together
|         | M2 4mm screw           | 17 | Holds the PCB and bottom plate together
|         | M2 Nut                 | 4 | For mounting the OLED cover
|         | M2 7mm screw           | 4 | For mounting the OLED cover
|         | Pinstripe PCB          | 1
|         | Bottom plate           | 1
|         | Switch plate           | 1
|         | Acrylic guard          | 1 
|         | Acrylic OLED cover     | 1 | I used dark gray translucent acrylic which masks the OLED module's PCB pretty well.
|         | Rubber Feet            | 4

## Build Guide
WIP

## Setting the Time
In the default keymap, pressing Fn+T (custom keycode KC_SETTIME) will put the keyboard into time setting mode. Enter the time in the form HHMMSS (hour, minute, second) in this mode to set the RTC time. This time will be stored in the RTC module, even when the keyboard is powered off, for as long as the battery lasts.

For custom keymaps, add the keycode KC_SETTIME to a key (preferably not on the base layer).

## Images
![Front](https://i.imgur.com/CiZuixS.jpg)
![Back](https://i.imgur.com/iYaOw6d.jpg)
![OLED](https://i.imgur.com/Nr2kXRJ.jpg)
![Pinstripe](https://i.imgur.com/yUHyV73.jpg)
![Pinstripe](https://i.imgur.com/9MpTOuu.jpg)
