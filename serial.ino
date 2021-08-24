//float intNum[] = {2};
#include <DigiCDC.h>
void setup() {
  // put your setup code here, to run once:
  SerialUSB.begin();
//  Serial.print("test");
//  pinMode(1, OUTPUT);
  pinMode(0,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//  digitalWrite(0, HIGH);
  if (SerialUSB.available()) {
    char x = SerialUSB.read();
    while(SerialUSB.available()>0){
      SerialUSB.read();  
    }
    SerialUSB.println(x);
    if(x=='0'){
      digitalWrite(0, LOW);
    }else{
      digitalWrite(0, HIGH);
    }
//    SerialUSB.println("1");
  }
//  if(Serial.available()>0){
//    delay(400);
//    intNum[0] = Serial.parseFloat();
//    while(Serial.available()>0){
//      Serial.read();  
//    }
//    if(intNum[0]==0){
//      digitalWrite(1, LOW);
//      Serial.print("off success");
//    }else{
//      digitalWrite(1, HIGH);
//      Serial.print("on success");
//    }
//  }
}
