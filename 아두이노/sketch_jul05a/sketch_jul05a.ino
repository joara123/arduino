int led=4;
int cds = A0;
int pin = 0;

void setup(){
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}
void loop(){
  pin=analogRead(cds);
  Serial.println(pin);

  if(cds<10){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
  delay(100);
}

