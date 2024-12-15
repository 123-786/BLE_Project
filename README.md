# **BLE-Based Data Communication System**<br>

## **Project Overview**<br>
_This project showcases a ground-up implementation of a BLE communication system using the BlueNRG-M2SP module, seamlessly integrated with an STM32F411RE microcontroller. It facilitates two-way data exchange between microcontroller and a BLE-enabled mobile device._

## **Purpose and Goals**<br>
The goal of this project is to:<br>
-Set up BLE communication between the STM32 microcontroller and a mobile device using the Stm32 board and BLE expansion board.<br>
-Establish a robust, low-energy, and real-time communication system.<br>
-Demonstrate handling data reception, transmission, and interaction with peripherals such as GPIO and push-buttons.<br>
-Provide real-time feedback via notifications when data changes or is received.<br>

## **Key Features**<br>
a) Bidirectional Communication: The system supports both data transmission and reception between the STM32F411RE and a mobile phone using custom BLE characteristics.<br>
b) Efficient Data Transfer: Event-driven architecture ensures minimal processing time and high efficiency during data handling.<br>
c) BLE Event Handling: Utilizes BLE-specific events to handle connections, disconnections, and attribute modifications.<br>
d) Push-Button Trigger: A push-button on the hardware triggers data transmission when pressed.<br>
e) GPIO Interaction: Real-time hardware interaction based on data received over BLE, such as toggling GPIO pins.<br>

## **Hardware Setup**<br>
[STM32F411RE](https://www.st.com/en/evaluation-tools/nucleo-f411re.html)<br>
[BlueNRG-M2SP](https://www.st.com/en/ecosystems/x-nucleo-bnrg2a1.html) <br>

## **Software Setup** <br>
STM32CubeMX<br>
STM32CubeIDE<br>
[LightBlue Mobile application](https://apps.apple.com/us/app/lightblue/id557428110)<br>


## **Project Structure**<br>
The code is structured into several key components:<br>
a) main.c: The entry point of the program, initializing system clocks, peripherals (UART, GPIO), and starting the BLE communication process through bluenrg_init and bluenrg_process.<br>
b) services.c: The code initializes the BlueNRG BLE stack, configures the device as a BLE peripheral, sets up GATT and GAP services, makes the device discoverable, and processes user events for button- triggered data transmission.<br>
c) app_bluenrg.c: Contains the main logic for BLE events, such as handling read/write requests and managing connection states.<br>   

### Project Screenshots
![image](https://github.com/user-attachments/assets/ae016ae5-5bad-4621-9b97-b13837dc2ab3)

### Project Demo Video



## **Conclusion**<br>
The Code is highly customizable for various embedded applications requiring BLE communication, from IoT devices to mobile app integration. It provides a foundation for developing more advanced BLE applications and can be extended to include additional features such as multiple connections, advanced data security, and power management optimizations.<br>
