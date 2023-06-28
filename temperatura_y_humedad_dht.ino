#include <Adafruit_Sensor.h>

#include <DHT.h>
  
#include <DHT_U.h>

#define Type DHT11

int dhtpin=2;

DHT HT(dhtpin, Type);

float Humedad;

float Temperatura;


          void setup(){
  
    
  Serial.begin(9600);
  
  HT.begin();
  
  }

void loop ()
{

   temperatura1 = analogRead(1);

    int base =327;

  int basetm = 40;

  int tm = temperatura1*basetm/base;
 
   
  Temperatura=HT.readTemperature();

  Humedad=HT.readHumidity();

  Serial.println("Temperatura=");
  
  Serial.println(Temperatura);
  
   Serial.println("c");

    Serial.println("Humedad=");
  
  Serial.println(Humedad);
  
   Serial.println("%");



   delay(3000);
  
  }
