#define LED_10 10
#define LED_12 12
#define LED_8 8
#define BUTTON 7
int val = 0;
int old_val = 0;
int state = 0;
bool printed = false;
void setup(){
  pinMode(LED_10, OUTPUT);
  pinMode(LED_12, OUTPUT);
  pinMode(LED_8, OUTPUT);
  pinMode(BUTTON, INPUT);
  Serial.begin(9600);
}

void loop(){
  val=digitalRead(BUTTON);
  if((val==HIGH)&&(old_val==LOW)){
    printed = false;
    state++;
    if(state==3){
      state=0;
    }
    delay(10);
  }
  old_val=val;
  if(state==1){
    digitalWrite(LED_10,HIGH);
    digitalWrite(LED_8,LOW);
    digitalWrite(LED_12,LOW);
    if(!printed){
      Serial.print("YELLOW");
      printed = true;
    }
  }
  else if(state==2){
    digitalWrite(LED_10,LOW);
    digitalWrite(LED_8,HIGH);
    digitalWrite(LED_12,LOW);
    if(!printed){
      Serial.print("GREEN");
      printed = true;
    }
  }
  else{
    digitalWrite(LED_10,LOW);
    digitalWrite(LED_8,LOW);
    digitalWrite(LED_12,HIGH);
    if(!printed){
      Serial.print("RED");
      printed = true;
    }
  }
}

