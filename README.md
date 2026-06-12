# Automatic-Water-Tank-Control-System

### Overview
This project consists of an automated water tank control system developed using an ESP32. The system monitors the water level and controls both a filling solenoid valve and a water extraction pump according to the operating conditions.
The objective is to automate the filling process, prevent dry operation of the pump, and provide a simple START/STOP control interface.

# Problem Statement
In many water storage systems, pumps and filling valves are operated manually, which can lead to problems such as:
- Automatic water level monitoring
- Pump protection against dry running
- Automatic filling control
- START and STOP commands
  
### Hardware Used
- ESP32 Dev Module
- Water Level Sensor
- Water pump
- Selonoid valve
- Power supply

### System Diagram
<img width="1293" height="788" alt="control-diagram" src="https://github.com/user-attachments/assets/03ba2a28-5ce2-4d33-b44d-8a90b9b80fdf" />

## Control Logic

The system uses a water level sensor to determine whether the tank is full or empty.

- LOW level → Solenoid valve opens and pump stops.
- HIGH level → Solenoid valve closes and pump can operate.
- STOP button → Pump disabled.
- START button → Pump enabled if water level is sufficient.
  
### Project Structure
- README.md
- 
### Future Improvements

- WiFi monitoring
- Mobile application
- LCD display
- Data logging

### Author
Miguel A. Hernandez
UTP Mechatronic Enginnering Student
