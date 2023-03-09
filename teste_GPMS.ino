#include <SoftwareSerial.h>

SoftwareSerial SIM900(7, 8); 

void setup() {
  SIM900.begin(19200);
  delay(20000);   
  sendSMS();
}

void loop() {
}

void sendSMS() {
  SIM900.print("AT+CMGF=1\r"); 
  delay(100);
  SIM900.println("AT+CMGS=\"+5562999856225\""); 
  delay(100);
  
  SIM900.println("Oi mesmo"); 
  delay(100);

  SIM900.println((char)26); 
  delay(100);
  SIM900.println();
  delay(5000); 
}
