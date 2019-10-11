void setup() 
{
  pinMode(6, 1);
  pinMode(7, 1);
  pinMode(8, 1);
  pinMode(9, 1);
  analogWrite( 5, 255);
  analogWrite(10, 255);
}

void loop() {
  digitalWrite(6, 1);
  digitalWrite(7, 0);
  digitalWrite(8, 1);
  digitalWrite(9, 0);
  delay(1000);
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  digitalWrite(9, 1);
  delay(1000);
}
