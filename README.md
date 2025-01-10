This repository contains all the resources and files related to our vein detection system project. The system is designed to enhance the ease of vein detection, improving efficiency for healthcare professionals and nurses during procedures like blood draws and cannulation.

Included Files:
Code Files: Arduino code for controlling the TFT display.
PCB Files: Schematic and PCB layout design files, detailing the hardware setup and connections.
Enclosure Files: 3D model and design files for the physical enclosure of the device.
Final Report: Comprehensive documentation covering:
Project objectives and design diagrams.
Simulation and testing methodologies.
Results and resource optimization strategies.
Contributions of team members.
Instructions for practical operation.
How It Works
The system uses an ESP32-CAM module to capture real-time images, which are streamed wirelessly to a browser via Wi-Fi. This enables users to detect veins with ease. The project employs the built-in ESP32 camera web server code for live streaming and incorporates a circular LED array to enhance visibility.

Why We Chose the ESP32-CAM
For our second-semester project, we used the ESP32-CAM module due to restrictions that required us to design a custom PCB and handle soldering. While this approach allowed us to meet the project requirements, it came with a tradeoff: the image quality of the ESP32-CAM is relatively low.

Future Improvements
To enhance the system, we propose replacing the ESP32-CAM with a Raspberry Pi and a NoIR Raspberry Pi Camera. This combination would provide higher image quality, enabling better vein detection. By applying advanced image processing techniques such as edge detection, veins can be made more visible and clearly outlined, significantly improving the system's effectiveness.

Key Components
ESP32-CAM Module: Captures and streams real-time images.
Circular LED Array: Enhances vein visibility in captured images.
ESP32 Camera Web Server: Provides a wireless interface for live streaming.
Purpose
This project aims to assist healthcare professionals by making vein detection more efficient and accessible, ultimately improving patient care.

