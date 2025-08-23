# TM4C123 LED Blink Project

## Project Overview
This project demonstrates basic **GPIO control**, **SysTick timer delays**, and **interrupt-driven input** on the TM4C123 microcontroller.  
An external LED is connected to **PA3**, and a push button is connected to **PD5**. Pressing the button toggles the LED using an **interrupt**, rather than polling.

---

## Hardware
- TM4C123GH6PM LaunchPad  
- 1x LED (with 220 Ω series resistor)  
- Jumper wires and breadboard  

**Connections:**  
| Component | Pin |
|-----------|-----|
| LED       | PA3 |


---

## Features
-Simple introduction to the TM4C123GH6PM microcontroller
- Configures **PA3 as digital output** for LED.     
- Demonstrates **toggle logic**: LED switches state on each button press.  
- Includes **blocking delay using SysTick timer** for potential timing functions.

---

## Code Structure
-Main.c -> LED pin initialization. Led toggle function, which toggles the pin from 1 to 0 continuously with a delay of 500ms in between using polling
-Led.c -> LED Pin declaration function: PA3 used as output without any alternate function implementation. The file also includes the toggle function, which simply toggles the pin from 1 to 0

---

## How to Run
- Simply connect a jumper wire on the configured pin of the TM4C123GH6PM to a resistor, then the resistor to the anode of the LED, and the cathode to ground.
- Connect the USB-Cord from the computer to power up the microcontroller.
- Ensure that the microcontroller is turned on debug
- Using Keil Uvision, with the cross compiler and debugger, downloaded the code to the flash memory of the  microcontroller
- If properly set up, the LED should start blinking

[Watch the demo video][https://drive.google.com/file/d/1bO1BTazhJGRp66re_tPQpP7-LfEj-rIx/view?usp=sharing]


