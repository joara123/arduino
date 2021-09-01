void setup() {
  Serial.begin(9600);
  int a = 5;
  int b = 4;
  if(a>b) {
    Serial.print("a가 b보다 크다");
  }
else {
  Serial.print("a는 b보다 작다");  
}
}
void loop() {
  // put your main code here, to run repeatedly:

}
