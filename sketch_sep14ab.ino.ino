void setup() {
  pinMode(D0, OUTPUT);
  pinMode(D3, INPUT);
}

void loop() {
  if (digitalRead(D3)==LOW)digitalWrite(D0, HIGH);
  else digitalWrite(D0, LOW);
}
