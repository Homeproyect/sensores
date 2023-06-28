
int sensor = 2;

int sensoron;

void setup() {

  pinMode(sensor, INPUT);

Serial.begin(9600);



}

void loop() {

sensoron = digitalRead(sensor);

if (sensoron == HIGH)

{
  delay(20);

  sensoron = digitalRead(sensor);

  if(sensoron == LOW)

  {
    Serial.println("sensor touch funciona");
    
    }

  
  
  
  }
}
