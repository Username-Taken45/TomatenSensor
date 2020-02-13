#include "dht.h" // Toevoegen van de DHT library aan de code

#define dht_apin A0 // Analoge pin waarop de sensor is aangesloten

dht DHT;

void setup(){

Serial.begin(9600); //Start de seriele communicatie van de arduino met de pc

delay(500); //Halve seconde wachten om op te starten

Serial.println("DHT11 Humidity & temperature Sensor");

//print tekst in de seriele monitor

delay(1000); //Wacht seconde om op te starten

} //Einde van de setup

void loop(){

DHT.read11(dht_apin); //Leest de sensor op A0

Serial.print("Current humidity = "); //print tekst in de seriele monitor

Serial.print(DHT.humidity); //print luchtvochtigheidwaarde in monitor

Serial.print("% "); //print tekst % in seriele monitor

Serial.print("temperature = "); //print tekst in de seriele monitor

Serial.print(DHT.temperature); //print temperatuurwaarde

Serial.println("C ");//print tekst C in de seriele monitor en start nieuwe regel

delay(5000); //Wacht 5 seconden alvoor de sensor weer te lezen.

} // Einde van de loop
