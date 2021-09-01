void setup() {
  Serial.begin(9600);//baudrate
  
  byte a = 5;

  // 0000 0101
  // 0000 0RGB
  // 0000 0001 &
  // 0000 00RG
  // 0000 000G
  
  int r = a>>2;
  int g = (a>>1)&1;
  int b = a&1;
  
  Serial.println(a<<1);
  Serial.println(a>>1);
  Serial.println(a&3);
  Serial.println(a|3);
}

void loop() {
  //Serial.println(Serial.available());
  //delay(1000);//단위
  //if (Serial.available() > 0){
    //int a = Serial.parseInt();
    //float b = Serial.parseFloat();

    //Serial.println(String(a+b));
  //}

  //int a =10;
  //float b =20;
  //while(b>1){
    //b=b/10;
  //}
  //float c= a+b;
  //Serial.print(c);
  //delay(1000);
}
