#include <TimeLib.h>
#include <TimeAlarms.h>

void setup(){
  Serial.begin(9600);
  setTime(7,00,0,7,23,19);
  Alarm.alarmRepeat(8,30,0,MorningAlarm);

  Alarm.timeRepeat(15, Repeats);
  Alarm.timeOnce(10, OnceOnly);
}

void looo(){
  digitalClockDisplay();
  Alarm.delay(1000);
}

void MorningAlarm(){
  Serial.println("Alarm");
}

void Repeats(){
  Serial.println("15s timer");
}

void OnceOnly(){
  Serial.println("ONLY");
}

void digitalClockDisplay(){
  Serial.print(hour());
  printDigits(minute());
  printDigits(second());
  Serial.println();
}

void printDigits(int digits){
  Serial.print(".");
  if(digits<10){
    Serial.print('0');
  }
  Serial.print(digits);
}

