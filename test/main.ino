/*
   
*/

//#include "TimerOne.h"
#include <Wire.h>
#include <Adafruit_INA219.h>

Adafruit_INA219 ina219;
   
// the setup routine runs once when you press reset:
void setup() {
  Serial.println("#####   test INA219 modified lib #####");  
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600); 
 
  ina219.begin();  // Initialize first board (default address 0x40)
  ina219.setCalibration_NO_BUS_320mv ();  // use Vin pins to measure voltage without shunt resistor
  //ina219.setCalibration_NO_BUS_40mv();
  //ina219.setCalibration_16V_400mA ();
}   
// the loop routine runs over and over again forever:
void loop() { 
  float shuntvoltage = 0; 
   Serial.println("#####   test INA219 modified lib #####");  
  shuntvoltage = ina219.getShuntVoltage_mV();
  Serial.print("Shunt Voltage: "); Serial.print(shuntvoltage); Serial.println(" mV");
  delay(2000);
}
 
