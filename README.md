**BLE-Based Data Communication System
**
**Project Overview 
**_This project showcases a ground-up implementation of a BLE communication system using the BlueNRG-M2SP module, seamlessly integrated with an STM32F411RE microcontroller. It facilitates two-way data exchange between microcontroller and a BLE-enabled mobile device._

**Purpose and Goals 
**
The goal of this project is to:
Set up BLE communication between the STM32 microcontroller and a mobile device using the Stm32 board and BLE expansion board.
Establish a robust, low-energy, and real-time communication system.
Demonstrate handling data reception, transmission, and interaction with peripherals such as GPIO and push-buttons.
Provide real-time feedback via notifications when data changes or is received.

**Key Features
**
a) Bidirectional Communication: The system supports both data transmission and reception between the STM32F411RE and a mobile phone using custom BLE characteristics.
b) Efficient Data Transfer: Event-driven architecture ensures minimal processing time and high efficiency during data handling.
c) BLE Event Handling: Utilizes BLE-specific events to handle connections, disconnections, and attribute modifications.
d) Push-Button Trigger: A push-button on the hardware triggers data transmission when pressed.
e) GPIO Interaction: Real-time hardware interaction based on data received over BLE, such as toggling GPIO pins.

**Hardware Setup
**
[STM32F411RE](https://www.st.com/en/evaluation-tools/nucleo-f411re.html)
[BlueNRG-M2SP](https://www.st.com/en/ecosystems/x-nucleo-bnrg2a1.html) 

**Software Setup
** 
STM32CubeMX
STM32CubeIDE
[LightBlue Mobile application](https://apps.apple.com/us/app/lightblue/id557428110)


**Project Structure 
**
The code is structured into several key components:
a) main.c: The entry point of the program, initializing system clocks, peripherals (UART, GPIO), and starting the BLE communication process through bluenrg_init and bluenrg_process.
b) services.c: The code initializes the BlueNRG BLE stack, configures the device as a BLE peripheral, sets up GATT and GAP services, makes the device discoverable, and processes user events for button- triggered data transmission..
c) app_bluenrg.c: Contains the main logic for BLE events, such as handling read/write requests and managing connection states.

**Conclusion 
**The Code is highly customizable for various embedded applications requiring BLE communication, from IoT devices to mobile app integration. It provides a foundation for developing more advanced BLE applications and can be extended to include additional features such as multiple connections, advanced data security, and power management optimizations.
