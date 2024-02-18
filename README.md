![Dino Arduino Banner](https://github.com/sfiguero-git/Chromedino-Arduino-Automation/assets/35702217/c4c48343-2158-45b5-9a8f-1d0c427d60de)
## Demo video (Python and Arduino versions): https://youtu.be/bz1vA3rF-I8
## Running the script
Running the **chromedino_auto.ino** is pretty straightforward, you just have to download the folder with the file that is included as part of this repository. When you open the script you'll notice the following line: 

`#include <Servo.h>`

The installation of this library can be done directly from Arduino IDE by going to _Tools > Manage Libraries..._ (alternatively you can press _CTRL+SHIFT+I_ and look up _servo_:

![image](https://github.com/sfiguero-git/Chromedino-Arduino-Automation/assets/35702217/a4f7e398-6f8c-4b49-812b-8e5b3a533035)

After doing the previous steps you should make any adjustments you need (e.g. modify the pin numbers to suit your own design). This script was originally tested on ELEGOO UNO R3 Board, for reference. When the setup is ready, connect your board to the pc, verify the script directly in Arduino IDE, and upload it to your board.
