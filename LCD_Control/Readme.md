# EX03 – LCD Display (16x2) using Arduino

## Aim
To interface 16x2 LCD with Arduino and display text message.

## Components Required
- Arduino UNO
- 16x2 LCD Display
- 10K Potentiometer
- Jumper Wires
- Breadboard

## LCD Pin Diagram

| Pin | Name | Description |
|-----|------|-------------|
| 1 | VSS | Ground |
| 2 | VDD | +5V |
| 3 | V0 | Contrast |
| 4 | RS | Register Select |
| 5 | RW | Read/Write |
| 6 | EN | Enable |
| 7 | D0 | Data |
| 8 | D1 | Data |
| 9 | D2 | Data |
|10 | D3 | Data |
|11 | D4 | Data |
|12 | D5 | Data |
|13 | D6 | Data |
|14 | D7 | Data |
|15 | A | Backlight + |
|16 | K | Backlight - |

## Arduino to LCD Connection

| LCD Pin | Arduino Connection |
|---------|-------------------|
| VSS | GND|
| VDD | 5V |
| V0 | Potentiometer Middle Pin |
| RS | A0 |
| RW | GND |
| EN | A1 |
| D4 | A2 |
| D5 | A3 |
| D6 | A4 |
| D7 | A5 |
| A | 5V |
| K | GND |

## Potentiometer Connection
- One side → 5V  
- One side → GND  
- Middle → LCD V0 (Pin 3)  

## Circuit Connection Summary