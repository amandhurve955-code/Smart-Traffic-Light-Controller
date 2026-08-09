# Smart-Traffic-Light-Controller
The Smart Traffic Light Controller is an Arduino-based automated traffic signal system. It controls Red, Yellow, and Green LEDs for two traffic directions. A 7-segment display shows the signal countdown time. The system demonstrates traffic automation and embedded control.

**Name:** AMAN DHURVE   
**Company:** CODTECH IT SOLUTIONS    
**ID:** CITS6427  
**Domain:** EMBEDDED SYSTEM   
**No. of Weeks:** 6 WEEKS    
**Internship Period:** 4 July 2026 - 15 August 2026

# Overview
The Smart Traffic Light Controller is an embedded system project that manages intersection signal transitions while providing a visible countdown timer for drivers and pedestrians to improve road safety and intersection efficiency.

# Circuit Diagram
 <img width="1142" height="969" alt="Circuit Diagram 1" src="https://github.com/user-attachments/assets/ed9c5f2b-e9bc-43ed-b6b3-9d0e06b140dc" />

# Features
   Automated multi-directional traffic light sequencing (Red, Yellow, Green).   
   Integrated 7-segment display countdown timer showing remaining seconds for the active signal state.   
   Synchronized timing and GPIO switching logic controlled via firmware.   

# Components Used
   Arduino Uno (Microcontroller Board)   
   LEDs: Red, Yellow, and Green LEDs (configured for multiple directions/lanes)   
   7-Segment Display (Common Cathode/Anode for numeric countdown)   
   Resistors: Current-limiting resistors for LEDs and the 7-segment display   
   Breadboard & Connecting Wires   
   USB Cable (for power supply and sketch programming)   

# Technologies Used
   Embedded C++ / Arduino Programming Language   
   Arduino IDE (for firmware compilation and uploading)   
   Circuit Simulation Tools (Tinkercad / Proteus)    
   
# Working Principle  
   The Arduino microcontroller executes a programmed state machine loop.   
   It turns on specific combinations of Red, Yellow, and Green LEDs for different traffic directions.   
   Concurrently, it outputs segment patterns to the 7-segment display to reflect the countdown timer corresponding to the active signal state.   
   
# Skills Demonstrated
   Microcontroller GPIO pin configuration and digital output management  
   Multiplexing and driving a 7-segment display from digital pins   
   Hardware prototyping using breadboards and discrete components   
   Embedded firmware timing logic development   
   
# Applications
   Automated urban and campus traffic signal control models   
   Educational lab demonstrators for embedded system courses   
   Low-cost microcontroller-based intersection management prototypes   
   
# Future Improvements
   Integration of IR proximity or ultrasonic sensors for traffic density-based dynamic timing.   
   Addition of a wireless module (such as ESP8266 or Bluetooth) for remote monitoring.    
   Expansion to a four-way intersection layout with dual 7-segment displays.   
   
# Skills Gained
  Hands-on experience with Arduino Uno hardware architecture   
  Proficiency in handling multi-component breadboard layouts   
  Understanding of display driver logic and timer-based software loops   
