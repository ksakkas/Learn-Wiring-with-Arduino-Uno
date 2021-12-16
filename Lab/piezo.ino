const int buzzer = 9; //buzzer στο pin 9


void setup(){
 
  pinMode(buzzer, OUTPUT); // buzzer - pin 9 ως output

}

void loop(){
 
  tone(buzzer, 1000);  // Αποστολή 1KHz ηχητικού σήματος...
  delay(1000);        // για 1sec
  noTone(buzzer);     // Σταματάμε τον ήχο
  delay(1000);        // για 1sec
  
}
