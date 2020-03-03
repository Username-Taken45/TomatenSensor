#include <SD.h> 
#include <SPI.h>
#include <Wire.h>
const int chipSelect = 10; 
File Data;
 
void setup() { pinMode(10 , OUTPUT); SD.begin(chipSelect);
Data=SD.open("Datos.csv",FILE_WRITE); 
Data.println("Kop1"); 
Data.close(); 
} 
void loop() { 
  Data = SD.open("Datos.csv", FILE_WRITE); 
  Data.println("ghello,");
  Data.close();
  delay(1000);
}
