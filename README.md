# DigitalPinsBetweenBoards
Using example sketches in the Arduino IDE to make an Arduino Uno signal a TTGO T-Display to perform a task.

In this scenario, I installed Button20210912 on an Arduino Uno, wired to a push button following the tutorial here: https://www.arduino.cc/en/Tutorial/BuiltInExamples/Button

I added a definition of an additional pin: toTDisplay mapped to Pin 3 for output. Pin 3 is set HIGH or LOW in parallel with the ledPin (Pin 13) in response to the state of the push button.

DigitalReadSerial is installed on a TTGO T-Display, following the tutorial here with one exception. https://www.arduino.cc/en/Tutorial/BuiltInExamples/DigitalReadSerial

The exception is the button is excluded and instead, Pin 2 on the TTGO T-Display is pulled low with the 10K Ohm resistor connected to ground and a jumper from Pin 2 on the T-Display is connected to Pin 3 on the Arduino.

The results can be seen in the video.

Thanks!

Arduino Uno Signals TTGO T-Display Using Digital GPIO Pins.
https://youtu.be/gc2Oy9VUCfk

![DigitalPinsBetweenBoards]()
