# SFSU ENGR 478 Group Project (3): Automated Watering Plant System
by Lang Cheng, Christopher Martin, Basim Baylor

The goal of this project is to design a watering mechanism for household plants. The embedded system will automatically respond to changes in soil moisture read from the sensor, and will water the plant via an electronic pump when the soil is too dry.

The key components of our project is a Bipolar Junction Transistor and an electric water pump. The transistor will switch the circuit on/off based on the voltage applied to its base, which is then determined by how the Nucleo board switches the output voltage of a pin.

Visual Studio Code and GitHub were integral tools to to foster collaboration and facilitate concurrent code revisions, enhancing the efficiency of testing processes within Keil MDK for this embedded project.

A significant portion of the project code is built upon previous code used in ENGR 478 lab sessions. 

Lab 9 (GPIO switch and edge-triggered interrupts).
Lab 10 (systick timers).
ADC (sample project version).
STM32L476xx header/assembly files that complement the textbook, "Embedded Systems with ARM Cortex-M Microcontrollers in Assembly Language and C, Yifeng Zhu".
