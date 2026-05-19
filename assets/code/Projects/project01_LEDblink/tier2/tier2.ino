int firstLedPin = 2;
int secondLedPin = 3;
int thirdLedPin = 4;

void setup()
{
  pinMode(firstLedPin, OUTPUT);
  pinMode(secondLedPin, OUTPUT);
  pinMode(thirdLedPin, OUTPUT);
}

void loop()
{
  digitalWrite(firstLedPin, LOW);
  delay(1000);
  digitalWrite(firstLedPin, HIGH);
  delay(1000);
  digitalWrite(secondLedPin, LOW);
  delay(1000);
  digitalWrite(secondLedPin, HIGH);
  delay(1000);
  digitalWrite(thirdLedPin, LOW);
  delay(1000);
  digitalWrite(thirdLedPin, HIGH);
  delay(1000); 
}