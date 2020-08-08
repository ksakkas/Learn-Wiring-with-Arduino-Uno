/*
This code was designed by Konstantinos Sakkas.
It is intended for academic use at the Department of Informatics and Telecommunication 
of University of Ioannina and my github https://ksakkas.github.io/Learn-Wiring-with-Arduino-Mega/.
*/
/*
This code was designed and compiled at Arduino ver. 1.8.13
It was designed for use with Arduino Mega 2560
*/

//Hello world

void setup() {        //Function of initialization of system parameters and materials.
                     //Initialize both serial ports: 
Serial.begin(9600); //It is the rate of transmission in bits per sec (for Serial).
}

void loop() {    //Main repetitive function.
Serial.print("Hello world");  //Show message
}