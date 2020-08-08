/*
This code was designed by Konstantinos Sakkas.
It is intended for academic use at the Department of Informatics and Telecommunication 
of University of Ioannina and my githubhttps://ksakkas.github.io/Learn-Wiring-with-Arduino-Mega/.
*/
/*
This code was designed and compiled at Arduino ver. 1.8.13
It was designed for use with Arduino Mega 2560
*/

//Led is High If give 1


#define led 10      //define led = 10 pin


void setup() {
    Serial.begin(9600);                    //It is the rate of transmission in bits per sec (for Serial).
    pinMode(led, OUTPUT);                //Declare led as output

}

void loop() {
  int x = Serial.parseInt();        //read from the serial and convert it to an integer

  if(x==1)                         //if x = 1
  {
      digitalWrite(led, HIGH);   //It gives a reasonable value of 1 (HIGH) to the led, ie it turns it on.
  }
  else                           //else
  {
      digitalWrite(led, LOW);     //It gives a reasonable value of 0 (LOW) to the led, ie it turns it off.    
  }
}