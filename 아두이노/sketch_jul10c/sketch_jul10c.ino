#define LEDR 13
#define LEDG 12
#define LEDB 11

void setup() {
  Serial.begin(9600);//baudrate
  
    pinMode(LEDR,OUTPUT);
    pinMode(LEDG,OUTPUT);
    pinMode(LEDB,OUTPUT);
}

void loop() {
  if(Serial.available()>0){
    int a = Serial.parseInt();
    
  int i;
  for(i=0;i<3;i++){
    int value = (a>>i)&1;
    digitalWrite(LEDB+i,value);
  }
  }
}
