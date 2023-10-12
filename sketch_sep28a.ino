#define led0 D0
#define led1 D1
#define led2 D2
#define btt D3

uint8_t LED = 0;

void setup() {
  pinMode(btt, INPUT_PULLUP);
  attachInterrupt(btt, funk, FALLING);
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  
}
void funk() {
  if (digitalRead(btt) == LOW){
    if (LED == 0){
      digitalWrite(led0, 1);
      digitalWrite(led1, 0);
      digitalWrite(led2, 0);
      LED = 1;
    }
    else {
      if (LED == 1){
        digitalWrite(led0, 0);
        digitalWrite(led1, 1);
        digitalWrite(led2, 0);
        LED = 2;
      }
      else {
        if (LED == 2){
          digitalWrite(led0, 0);
          digitalWrite(led1, 0);
          digitalWrite(led2, 1);
          LED = 3;
        }
        else {
          if (LED == 3){
            digitalWrite(led0, 0);
            digitalWrite(led1, 0);
            digitalWrite(led2, 0);
            LED = 0;
          }
        }
      }
    }
  }
}