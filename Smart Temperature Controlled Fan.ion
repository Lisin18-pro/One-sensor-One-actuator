const int tempPin = A0;      // TMP36 output
const int motorPin = 9;      // Motor control pin

void setup() {
  pinMode(motorPin, OUTPUT);
  digitalWrite(motorPin, LOW);
  Serial.begin(9600);
}

void loop() {

  // Read sensor value
  int sensorValue = analogRead(tempPin);

  // Convert ADC value to voltage
  float voltage = sensorValue * (5.0 / 1023.0);

  // Convert voltage to temperature (TMP36 formula)
  float temperature = (voltage - 0.5) * 100.0;

  // Print values
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  // Fan control
  if (temperature > 30.0) {
    digitalWrite(motorPin, HIGH);   // Fan ON
    Serial.println("Fan ON");
  }
  else {
    digitalWrite(motorPin, LOW);    // Fan OFF
    Serial.println("Fan OFF");
  }

  delay(1000);
}
