


#include "DHT.h"
#define sensor 6
#define rele 5



DHT dht(sensor, DHT11);


void setup() {

   pinMode (rele,OUTPUT);
   Serial.begin(9600);
   Serial.println(F("DHT11 inicio."));

   dht.begin();
}

void loop() {

delay(3000);


  float humedad = dht.readHumidity();
  float  temperatura = dht.readTemperature();


  if (isnan(humedad) || isnan(temperatura))
  {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }



Serial.print("\nHumedad: ");
Serial.print(humedad);
Serial.print("\nTemperatura: ");
Serial.print(temperatura);

if (temperatura>25.00)
{
  digitalWrite(rele,HIGH);
}


if (temperatura<23.50)
{
  digitalWrite(rele,LOW);  
}



}
