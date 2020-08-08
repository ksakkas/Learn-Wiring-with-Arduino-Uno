/*
This code was designed by Konstantinos Sakkas.
It is intended for academic use at the Department of Informatics and Telecommunication
of University of Ioannina and my github https://ksakkas.github.io/Learn-Wiring-with-Arduino-Mega/.
*/
/*
This code was designed and compiled at Arduino ver. 1.8.13
It was designed for use with Arduino Mega 2560
*/

//blink led from pin

#define x 10                //variable statement for initialization pin
void setup() {             // the setup function runs once when you press reset or power the board
pinMode(x, OUTPUT);       //pin x = 10 statement as output
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(x, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(x, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
}