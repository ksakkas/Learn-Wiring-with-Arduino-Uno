/*
This code was designed by Konstantinos Sakkas.
It is intended for academic use at the Department of Informatics and Telecommunication 
of University of Ioannina and my github https://ksakkas.github.io/Learn-Wiring-with-Arduino-Mega/.
*/
/*
This code was designed and compiled at Arduino ver. 1.8.13
It was designed for use with Arduino Mega 2560
*/

//For

#define led 10      //define led = 10 pin

void setup() {
    pinMode(led, OUTPUT);                //Declare led as output
}

void loop() {
    for(int i = 0; i < 1000; i++){ //for until 1000
      digitalWrite(led, HIGH);    //It gives a reasonable value of 1 (HIGH) to the led, ie it turns it on.
      delay(100);                //wait for 100ms = 0.1sec
      digitalWrite(led, LOW);   //turn the LED off by making the voltage LOW
      delay(100);              //wait for 100ms = 0.1sec
    }

}

