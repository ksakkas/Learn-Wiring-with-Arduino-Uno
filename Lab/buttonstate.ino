const int BUTTON_PIN = 2;   

int lastState = LOW;  
int currentState;                

void setup() {
  Serial.begin(9600);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  currentState = digitalRead(BUTTON_PIN);

  if(lastState == HIGH && currentState == LOW)
    Serial.println("button pressed");
  else if(lastState == LOW && currentState == HIGH)
    Serial.println("button released");

  lastState = currentState;
}
