#include <Wire.h>

#define ADDRESS 0x4D // MCP3221-A5 address in 7bit format (There are other addresses available)

float vRef = 4107; //vRef reading in mV - Check This WIth DMM
float stepSize = vRef/4096; //Each step = our vRef/ number of steps in 12bit

void setup(){
  Wire.begin(); //Initialize I2C comms
  Serial.begin(9600); //Initialize Serial comms
}

void loop(){
  byte adc_MSB;
  byte adc_LSB;
  int adcRaw;
  float miliVolts;
  
   Wire.requestFrom(ADDRESS, 2);        //requests 2 bytes
   while(Wire.available() < 2);         //while two bytes to receive
    
   adc_MSB = Wire.read();           
   adc_LSB= Wire.read();
   adcRaw = (adc_MSB * 256) + adc_LSB;
   miliVolts = adcRaw * stepSize;
   Serial.print("ADC RAW: ");
   Serial.println(adcRaw);
   Serial.print("Voltage: ");
   Serial.println(miliVolts/1000);
   Serial.print("mV/Step      : ");
   Serial.println(stepSize,4);
   delay(1000);
}
