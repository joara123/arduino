const int sensorPin = 0;
int lightLevel;

void setup(){
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
}
void loop(){
  lightLevel = analogRead(sensorPin);
  manualTune();
  analogWrite(5, lightLevel);
  analogWrite(6, lightLevel);
  analogWrite(7, lightLevel);
}
void manualTune(){
  lightLevel=map(lightLevel, 500, 1023, 0, 255);
  lightLevel=constrain(lightLevel, 0, 255);
}

