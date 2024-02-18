![Dino Arduino Banner](https://github.com/sfiguero-git/Chromedino-Arduino-Automation/assets/35702217/c4c48343-2158-45b5-9a8f-1d0c427d60de)
## Demo video (Python and Arduino versions): https://youtu.be/bz1vA3rF-I8
## List of components used
* 1 X UNO R3 Board (ATmega328P)
* 1 X Photoresistor
* 1 X LED
* 1 X Positional Micro Servo
* 1 X 220 Ω Resistor (for LED)
* 1 X 1 kΩ Resistor (for Photoresistor)
* (Recommended) 12+ X Jumper Wires
  
## Circuit Diagrams

![Circuit Diagram Dino Chrome](https://github.com/sfiguero-git/Chromedino-Arduino-Automation/assets/35702217/128280c0-13b2-42dd-bb2c-402d559c5ab7)

![Circuit Schematic Dino Chrome](https://github.com/sfiguero-git/Chromedino-Arduino-Automation/assets/35702217/a1bf9317-79fb-4ace-a58d-653ce27a4909)

## Running the script
Running the **chromedino_auto.ino** is pretty straightforward, you just have to download the folder with the file that is included as part of this repository. When you open the script you'll notice the following line: 

`#include <Servo.h>`

The installation of this library can be done directly from Arduino IDE by going to _Tools > Manage Libraries..._ (alternatively you can press _CTRL+SHIFT+I_ and look up _servo_:

![image](https://github.com/sfiguero-git/Chromedino-Arduino-Automation/assets/35702217/a4f7e398-6f8c-4b49-812b-8e5b3a533035)

After doing the previous steps you should make any adjustments you need (e.g. modify the pin numbers to suit your own design). This script was originally tested on ELEGOO UNO R3 Board, for reference. When the setup is ready, connect your board to the pc, verify the script directly in Arduino IDE, and upload it to your board.
