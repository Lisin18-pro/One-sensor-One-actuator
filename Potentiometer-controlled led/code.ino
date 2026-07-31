int potPin = A0;
int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int value = analogRead(potPin);

  if (value > 512)
    digitalWrite(ledPin, HIGH);
  else
    digitalWrite(ledPin, LOW);

  delay(100);
}