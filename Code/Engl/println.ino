/*
This code was designed by Konstantinos Sakkas on August 7th 2020.
It is intended for academic use at the Department of Informatics and Telecommunication 
of University of Ioannina and my github https://ksakkas.github.io/Learn-Wiring-with-Arduino-Mega/.
*/
/*
This code was designed and compiled at Arduino ver. 1.8.13
It was designed for use with Arduino Mega 2560
*/

//Println

void setup() {
  Serial.begin(9600); //It is the rate of transmission in bits per sec (for Serial).
}

void loop() {
  Serial.println("Konstantinos Sakkas");   //Show message (with break line)
  Serial.println("0000");                //Show message (with break line)
}