int LED = 12;
int BUTTON = 13;
int state = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  int value = digitalRead(BUTTON); //변수에 버튼입력값 저장
  if(value == HIGH){
    if(state == 0){
      state = 1;
    }
    else if(state == 1){
      state = 0;
    }
  }
  if(state == 0){ //0이면 꺼짐
    digitalWrite(LED,LOW);
  }
  else if(state == 1){ //1이면 켜짐
    digitalWrite(LED,HIGH);
  }
}
