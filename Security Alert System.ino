#include <Arduino.h>
#include <U8x8lib.h>
 
 U8X8_SSD1306_128X64_NONAME_HW_I2C u8x8(/* reset=*/ U8X8_PIN_NONE);
int soundPin = A2; 
// Analog sound sensor is to be attached to analog
int lightPin = A6; 
//Analog light sensor is to be attached to analog
int ledPin = 4; // Digital LED is to be attached to digital
int BuzzerPin = 5;
 
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(lightPin, INPUT);
  pinMode(soundPin, INPUT);
  pinMode(BuzzerPin, OUTPUT);
  u8x8.begin();
  u8x8.setFlipMode(1);
}
 
void loop(){
  int soundState = analogRead(soundPin); 
// Read sound sensor’s value
  int lightState = analogRead(lightPin); 
// Read light sensor’s value
  // if the sound sensor's value is greater than 500 or the light sensor is less than 200, the light will be on.
  //Otherwise, the light will be turned off
if (soundState > 500 || lightState < 2) {
  digitalWrite(ledPin, HIGH);
  delay(500); 
  if (soundState > 500) {
    analogWrite(BuzzerPin, 1);
    delay(500);
    u8x8.setFont(u8x8_font_chroma48medium8_r);
    u8x8.setCursor(0, 0);
    u8x8.print("under attack");
    
  }
  else{
    analogWrite(BuzzerPin, 0);
    delay(0);
  }
  
}else{
  digitalWrite(ledPin, LOW);

}
}
