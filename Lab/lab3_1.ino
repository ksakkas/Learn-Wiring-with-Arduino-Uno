/* This code was designed by Konstantinos Sakkas on Octomber 24th 2021.
   It is intended for academic use at the Department of Informatics and Telecommunication of University of Ioannina.
   
   This code was designed and compiled at Arduino IDE ver. 1.8.16
   It was designed for use with Arduino UNO R3 ATmega328P		
   
   Write a program that will display at the beginning of the program information about the department and the laboratory (department name, laboratory name) as well as information about the student (name, surname, am).

   Then it will repeatedly count from 0 to 10.
*/

int i=0;
void setup()
{
  Serial.begin(9600);
  Serial.println("Department of Informatics and Telecomunication");
  Serial.println("Lab Computer Architecture");
  Serial.println("----------------------------");
  Serial.println("Konstantinos Sakkas");
  Serial.println("AM: 1549");
}

void loop()
{
 while(i <=10)
 {
   Serial.println(i);
     delay(1000);
   i++;
 }
  delay(1000);
  i = 0;
}
