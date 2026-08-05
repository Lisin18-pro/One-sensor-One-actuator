int sensorPin=A0;
int buzzer=8;

void setup()
{
  pinMode(buzzer,OUTPUT);
}

void loop()
{
  int value=analogRead(sensorPin);

  float voltage=value*5.0/1023.0;
  float temp=(voltage-0.5)*100;

  if(temp>30)
    digitalWrite(buzzer,HIGH);
  else
    digitalWrite(buzzer,LOW);

  delay(500);
}