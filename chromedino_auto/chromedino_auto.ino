//@author Saul Figueroa

//This script was tested with the browser game available at: https://chromedino.com/

#include <Servo.h> //Library for managing the servo motor

int sensorPin = A0;   //Input that varies with the resistance of our photoresistor (depends on light source)
int sensorVal = 0;  //variable to store the value we read from our photoresistor
int ledPin = 0; // We'll connect the anode of our LED to the digital pin 0 to control it
int sensitivity = 15; //Helps us define a threshold for activating our servo motor and LED

// We'll use the digital pin 3 for controlling the micro servo motor
int servoPin = 3;

//We need to create a servo object 
Servo ServoUNO; 

// This function helps us move the servo to click the spacebar in our keyboard
void pressKey(){
   ServoUNO.write(0); //Set servo at 0 degrees
   delay(100); 
   
   ServoUNO.write(90); //Set servo at 90 degrees
   delay(100); 
}

// This is the first function that is called in our script
void setup() {
 // Serial.begin(9600); -> For debugging purposes, so we can see the values of R in the Serial Monitor of our IDE
  pinMode(ledPin, OUTPUT);  //Set digital pin 0 as output
  ServoUNO.attach(servoPin); // We attach our servo to the required pin 
  delay(500);
}

//Defines the logic for each cycle of our script
void loop() {
  sensorVal = analogRead(sensorPin); // Read current value for our photoresistor
  while(sensorVal > sensitivity){  // while the value of R we read > 15 (sensitivity value we defined):
    digitalWrite(ledPin, 0);      // Turn off the LED
    sensorVal = analogRead(sensorPin); // //Check if we should exit the while loop
   // Serial.println(sensorVal); -> we could use this to debug and check the range of values of R we read from our photoresistor
    delay(1);
  }  
  digitalWrite(ledPin, 1); //If we reach this line of code, we detected a shadow/obstacle in the game, so we turn on the LED.
  pressKey(); //Send commands to the servo so the spacebar is pressed (i.e. the dinosaur jumps)
  delay(100);
 // Serial.println(sensorVal); -> Another line we could use for debugging
  
  delay(1);
}
