#define LED1 3
#define LED2 4
#define LED3 5
 
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
}

void loop(){
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  delay(1000);
  RandomLED();
  delay(1000);
}

