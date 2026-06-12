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

## Software Logic

The program is based on a simple state-control strategy.

### Inputs

| Input | Description |

| START button | Enables the system |

| STOP button | Disables the system |

| Water level sensor | Detects low or high water level |

### Outputs

| Output | Description |

| Pump | Water extraction |

| Solenoid Valve | Tank filling |

### Operation

1. The START button enables the control system.
2. The STOP button disables the entire system.
3. When the water level is LOW:
   - The pump is turned OFF.
   - The solenoid valve is opened.
4. When the water level is HIGH:
   - The pump is allowed to operate.
   - The solenoid valve is closed.
5. If the system is disabled:
   - Pump OFF.
   - Solenoid valve OFF.
  
### Future Improvements

- WiFi monitoring
- Mobile application
- LCD display
- Data logging

### Author
Miguel A. Hernandez
UTP Mechatronic Enginnering Student
