void setup() {
  Serial.begin(9600);
  pinMode(D3, INPUT_PULLUP);
  pinMode(D0, OUTPUT);
//  pinMode(D1, OUTPUT);
//  pinMode(D2, OUTPUT);
  
}

void loop() {
  int sens = digitalRead(D3);
  Serial.println(sens);
  if (sens == HIGH) {
    digitalWrite(D0, LOW);
  } else { 
    digitalWrite(D0, HIGH);
  }
}
