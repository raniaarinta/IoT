#include <ESP8266WiFi.h>
#define BLINK_PRINT Serial
#include <BlynkSimpleEsp8266.h>

int Led=0,led1=13,led2=12,led3=14;


int btnPin,btnpin2,btnpin3,btnpin4;

char auth[]="";

char ssid[]="";
char pass[]="";

BLYNK_WRITE(V1)
{
  btnPin = param.asInt();
}
BLYNK_WRITE(V2)
{
  btnpin2 = param.asInt();
}  
BLYNK_WRITE(V3)
{
  btnpin3 = param.asInt();
} 
BLYNK_WRITE(V4)
{
  btnpin4 = param.asInt();
} 

  

void setup()
{
  pinMode(Led, OUTPUT); 
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT); 
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}
void loop()
{
  if(btnPin==0){
    digitalWrite(Led, LOW);
  }
  else if(btnPin==1) {
    digitalWrite(Led, HIGH);  // Turn the LED off by making the voltage HIGH
  }
  if(btnpin2==0){
    digitalWrite(led1, LOW);
  }
  else if(btnpin2==1) {
    digitalWrite(led1, HIGH);  // Turn the LED off by making the voltage HIGH
  }
  if(btnpin3==0){
    digitalWrite(led2, LOW);
  }
  else if(btnpin3==1) {
    digitalWrite(led2, HIGH);  // Turn the LED off by making the voltage HIGH
  }
  if(btnpin4==0){
    digitalWrite(led3, LOW);
  }
  else if(btnpin4==1) {
    digitalWrite(led3, HIGH);  // Turn the LED off by making the voltage HIGH
  }
  Blynk.run();
}
