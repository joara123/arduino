
int led[] = {1,2,3,4,5}
int sw[] ={A0,A1,A2,A3,A4};
long randNumber;
int i;
long randNumber;

void setup() {
  Serial.begin(9600);
  for(i=0;i<5;i++){
    pinMode(led[i],OUTPUT);
    pinMode(sw[i],INPUT_PULLUP);
  }
}

void loop() {
}

