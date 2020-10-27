void setup()
{
  pinMode(7, INPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  if (digitalRead(7) >= 1) {
    digitalWrite(10, HIGH);
  } else {
    digitalWrite(10, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}