/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/DigitalReadSerial
*/

#include <TFT_eSPI.h>
#include <SPI.h>

// digital pin 17 is attached to pin 3 on the arduino board:
int fromArduino = 2;

TFT_eSPI tft = TFT_eSPI(135, 240); // Invoke custom library

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the fromArduino's pin an input:
  pinMode(fromArduino, INPUT);

  tft.begin();
  tft.setRotation(1);
  tft.setTextColor(TFT_WHITE, TFT_BLACK); 
  tft.setTextSize(2);   

}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int msgReceived = digitalRead(fromArduino);
  // print out the state of the button:
  Serial.println(msgReceived);
  delay(1);        // delay in between reads for stability

  if (msgReceived == HIGH) {
    // turn LED on:
  tft.fillScreen(TFT_BLACK);
  tft.setCursor(0, 0);
  tft.println("Hello from Arduino");
  delay(100);   
  } 
  else {
  tft.fillScreen(TFT_BLACK); 
  delay(100);  
  }
  
}
