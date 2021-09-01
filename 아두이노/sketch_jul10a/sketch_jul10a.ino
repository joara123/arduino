#define LED1 3
#define LED2 4
#define LED3 5 //LED들

#define BUTTON1 6
#define BUTTON2 7
#define BUTTON3 8 //BUTTON들

int state = 0; //HIGH,LOW 때 쓸꺼

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
  pinMode(BUTTON1,INPUT);
  pinMode(BUTTON2,INPUT);
  pinMode(BUTTON3,INPUT);
}

void loop(){
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  delay(1000);
  RandomLED();
  delay(3000);

  int value = digitalRead(BUTTON1); //BUTTON1 값 저장
  if(value == HIGH){
    if(state == 0){
      state = 1;
    }
    else if(state == 1){
      state = 0;
    }
  }
  if(state == 0){
    digitalWrite(LED1,LOW);
  }
  else if(state == 1){
    digitalWrite(LED1,HIGH);
  }

  int value = digitalRead(BUTTON2); //BUTTON2 값 저장
  if(value == HIGH){
    if(state == 0){
      state = 1;
    }
    else if(state == 1){
      state = 0;
    }
  }
  if(state == 0){
    digitalWrite(LED2,LOW);
  }
  else if(state == 1){
    digitalWrite(LED2,HIGH);
  }

  int value = digitalRead(BUTTON3); //BUTTON3 값 저장
  if(value == HIGH){
    if(state == 0){
      state = 1;
    }
    else if(state == 1){
      state = 0;
    }
  }
  if(state == 0){
    digitalWrite(LED3,LOW);
  }
  else if(state == 1){
    digitalWrite(LED3,HIGH);
  }
}

