int ledPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(100); // Wait for 100 milliseconds
  digitalWrite(ledPin, LOW);
  delay(100); // Wait for 100 milliseconds
}