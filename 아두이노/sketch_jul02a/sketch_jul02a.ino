int BUTTONpin = 12;
int REDpin = 5;
int GREENpin = 4;
int val = 0;
int old_val = 0;
int state = 0;

void setup(){
  pinMode(REDpin, OUTPUT);
  pinMode(GREENpin, OUTPUT);
  pinMode(BUTTONpin, INPUT_PULLUP);
}

void loop(){
  val=digitalRead(BUTTONpin);
  if((val==HIGH)&&(old_val==LOW)){
    state++;
    if(state==4){
      state=0;
    }

    delay(100);
  }
  old_val=val;
  if(state==1){
    digitalWrite(REDpin,LOW);
    digitalWrite(GREENpin,HIGH);
  }
  else if(state==3){
    digitalWrite(REDpin,HIGH);
    digitalWrite(GREENpin,LOW);
  }
  else{
    digitalWrite(REDpin,LOW);
    digitalWrite(GREENpin,LOW);
  }
}

