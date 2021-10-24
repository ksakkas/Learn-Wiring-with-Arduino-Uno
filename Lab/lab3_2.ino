/* This code was designed by Konstantinos Sakkas on Octomber 24th 2021.
   It is intended for academic use at the Department of Informatics and Telecommunication of University of Ioannina.
   
   This code was designed and compiled at Arduino IDE ver. 1.8.16
   It was designed for use with Arduino UNO R3 ATmega328P		
   
   Write a program that will display at the beginning of the program information about the department and the laboratory (department name, laboratory name) as well as information about the student (name, surname, am).

   Then the program will repeatedly ask the user for his semester and only when the user gives the semester to display it.
*/

String ex;
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
  Serial.println("Dose examhno");
  ex = Serial.readString();
  delay(500);
  
  if(ex != "")
  {
    Serial.println(ex);
  }
  
}
