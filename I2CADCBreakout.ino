#include <Wire.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#define ADDRESS 0x4D // MCP3221 A5 address 7bit format

float vRef = 4110; //vRef reading in mV
float stepSize = vRef/4096; //Each step = our vRef/ number of steps in 12bit

void setup(){
  Wire.begin(); //conects I2C
  lcd.begin(20,4);
}

void loop(){
  byte adc_high;
  byte adc_low;
  int adcRaw;
  float miliVolts;
  
   Wire.requestFrom(ADDRESS, 2);        //requests 2 bytes
   while(Wire.available() < 2);         //while two bytes to receive
    
   adc_high = Wire.read();           
   adc_low = Wire.read();
   adcRaw = (adc_high * 256) + adc_low;
   miliVolts = adcRaw * stepSize;
   lcd.setCursor(0,0);
   lcd.print("ADC RAW: ");
   lcd.print(adcRaw);
   lcd.setCursor(0,1);
   lcd.print("Voltage: ");
   lcd.print(miliVolts/1000);
   lcd.setCursor(0,2);
   lcd.print("mV/Step      : ");
   lcd.print(stepSize,4);
   delay(1000);
}
