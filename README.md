[English](README.md) | [Español](README.es.md)

# NyxUSB

Silent USB-based data extraction tool for educational and authorized security testing.

## Overview

NyxUSB is a hardware-based tool designed to automate data extraction from target systems in a silent and offline manner. Inspired by Nyx, the goddess of the night, it operates without drawing attention and without requiring network connectivity.

## Architecture

NyxUSB is composed of three main components:

1. **Digispark (Command Injector)**  
   Acts as a HID device that executes predefined commands on the target system upon connection.

2. **Payload USB (Execution & Storage)**  
   Contains a script (e.g., .bat) responsible for performing the data extraction process and storing the collected files.

3. **Custom USB Hub (PCB)**  
   A custom-built USB hub that allows both devices to operate simultaneously and coordinate their behavior as a single unit.

## How It Works

1. The device is plugged into a target machine.  
2. The Digispark injects commands automatically.  
3. The payload USB executes a silent extraction script.  
4. Data is collected and stored locally on the USB device.  

## Disclaimer

This project is intended for educational purposes and authorized security testing only.  
Do not use this tool on systems without explicit permission.
