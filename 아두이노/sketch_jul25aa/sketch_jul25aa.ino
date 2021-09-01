#define LED1 3
#define LED2 4
#define LED3 5 //LED들 설정

#define BUTTON1 6
#define BUTTON2 7
#define BUTTON3 8 //BUTTON들 설정
 
int state = LOW; //LED 상태
int reading; //BUTTON 상태
int previous = LOW; //BUTTON 이전 상태
 
long time = 0; //LED가 ON/OFF된 마지막 시간
long debounce = 100; //debounce 타임 설정
//debounce(바운딩)누르고 때는 순간에 센서의 접전 부분에서 ON/OFF 여러번 반복


void RandomLED(){
  int a;
  a = random(3);

  if(a==0){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
  }
  else if(a==1){
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,LOW);
  }
  else if(a==2){
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,HIGH);
  }
}

void setup(){
  Serial.begin(9600);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(BUTTON1,INPUT_PULLUP);
  pinMode(BUTTON2,INPUT_PULLUP);
  pinMode(BUTTON3,INPUT_PULLUP);//아둥노 풀업저항 사용
}
 
void loop(){
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  delay(1000);
  RandomLED();
  delay(1000);

  if(reading = digitalRead(BUTTON1)){ //BUTTON1의 상태 읽음
  if(reading==HIGH && previous == LOW && millis() - time > debounce){
    //BUTTON이 눌려졌고 눌림 경과시간이 debounce 시간보다 크면 실행
    if (state == HIGH){
      state = LOW;
    }
    else{
      state = HIGH;
    }
    time = millis();
  }
 
  digitalWrite(LED1, state);
 
  previous = reading;}
  //

  if(reading = digitalRead(BUTTON2)){ //BUTTON2의 상태 읽음
  if(reading==HIGH && previous == LOW && millis() - time > debounce){
    //BUTTON이 눌려졌고 눌림 경과시간이 debounce 시간보다 크면 실행
    if (state == HIGH){
      state = LOW;
    }
    else{
      state = HIGH;
    }
    time = millis();
  }
 
  digitalWrite(LED2, state);
 
  previous = reading;}
  //

  if(reading = digitalRead(BUTTON3)){ //BUTTON3의 상태 읽음
  if(reading==HIGH && previous == LOW && millis() - time > debounce){
    //BUTTON이 눌려졌고 눌림 경과시간이 debounce 시간보다 크면 실행
    if (state == HIGH){
      state = LOW;
    }
    else{
      state = HIGH;
    }
    time = millis();
  }
 
  digitalWrite(LED3, state);
 
  previous = reading;}
}
