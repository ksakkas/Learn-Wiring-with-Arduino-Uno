#define echoPin 2 // συνδέστε την ακίδα D2 Arduino στην ακίδα Echo του HC-SR04
#define trigPin 3 // συνδέστε την ακίδα D3 Arduino στην ακίδα Trig του HC-SR04

long duration; // μεταβλητή για τη διάρκεια της διαδρομής των ηχητικών κυμάτων
int distance; // μεταβλητή για τη μέτρηση της απόστασης

void setup() {
  pinMode(trigPin, OUTPUT); // Ορίζει το trigPin ως OUTPUT
  pinMode(echoPin, INPUT); // Ορίζει το echoPin ως INPUT
  Serial.begin(9600);    // Η σειριακή επικοινωνία ξεκινά με ταχύτητα baudrate 9600
  Serial.println("Ultrasonic Sensor HC-SR04"); 
}
void loop() {
  // Αρχικοποίηση του trigPin ως LOW
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Θέτουμε το trigPin HIGH (ACTIVE) για 10 μικροδευτερόλεπτα
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Διαβάζει το echoPin, επιστρέφει το χρόνο διαδρομής του ηχητικού κύματος σε μικροδευτερόλεπτα
  duration = pulseIn(echoPin, HIGH);

  // Υπολογισμός της απόστασης
  distance = duration * 0.034 / 2; // Ταχύτητα ηχητικού κύματος διαιρούμενη με 2 (πηγαινει και πίσω)

  // Εμφανίζει την απόσταση στη σειριακή οθόνη
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
}
