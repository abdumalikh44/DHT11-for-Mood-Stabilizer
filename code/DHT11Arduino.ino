
#include "DHT.h"

//Initialise DHT Library and define data pin
#define DHTTYPE DHT11
#define DHTPIN 4 
DHT dht(DHTPIN,DHTTYPE);

//Variables to store temp and hum data



void setup()
{
  Serial.begin(9600);  
  dht.begin();
  int temp = dht.readTemperature();
  Serial.println(temp);
}

void loop()
{
    
    
   
}
