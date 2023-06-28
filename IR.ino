int ir_sensor_pin = 2; // IR sensor pin 

void setup()
{ 
  Serial.begin(9600);
  
  pinMode(ir_sensor_pin, INPUT);   }
  
  void loop()
  
  {

   if (digitalRead(ir_sensor_pin))  {     
  
 
    Serial.println(digitalRead(ir_sensor_pin));

    delay(5000);
  }
  
 
  
  else {     Serial.println("Object not detected");    
  }
  
  }  
