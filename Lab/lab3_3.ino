/* This code was designed by Konstantinos Sakkas on Octomber 24th 2021.
   It is intended for academic use at the Department of Informatics and Telecommunication of University of Ioannina.
   
   This code was designed and compiled at Arduino IDE ver. 1.8.16
   It was designed for use with Arduino UNO R3 ATmega328P		
   
   Write a program that will display at the beginning of the program information about the department and the laboratory (department name, laboratory name) as well as information about the student (name, surname, am).

   Then the program will repeatedly ask the maximum temperature that an Arduino can withstand, if the temperature is <= 85 (normal) then it will light a green led otherwise it will light a red one.
*/

int gled = 7;
int rled = 8;
int tpn;
void setup()
{
  Serial.begin(9600);
  pinMode(gled, OUTPUT);
  pinMode(rled, OUTPUT);
  Serial.println("Department of Informatics and Telecomunication");
  Serial.println("Lab Computer Architecture");
  Serial.println("----------------------------");
  Serial.println("Konstantinos Sakkas");
  Serial.println("AM: 1549");
}

void loop()
{
  Serial.println("Give Max temp Arduino:");
  tpn = Serial.parseInt();
  delay(500);
  
  if(tpn > 0 && tpn <=85)
  {
    digitalWrite(gled, HIGH);
    digitalWrite(rled, LOW);
  }
  if(tpn > 85)
  {
    digitalWrite(rled, HIGH);
    digitalWrite(gled, LOW);
  }
  
}
