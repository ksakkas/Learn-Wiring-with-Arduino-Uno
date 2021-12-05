void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(A0);
  if (value < 300)
  {
     digitalWrite(3,HIGH);
  }
  else{
     digitalWrite(3,LOW);
  }
}
