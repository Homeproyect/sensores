int luz = 0;
int temperatura = 1;
void setup() {
  //Iniciamos la comunicación serial
  Serial.begin(9600);

  pinMode( 13 , OUTPUT);
}

void loop() {

   luz = analogRead(0);
  temperatura = analogRead(1);


  int base =327;

  int basetm = 40;

  int tm = temperatura*basetm/base;
 
 
  if (luz < 400 ) { 

Serial.println("noche");
  Serial.println(luz);
    
  }
  else if (luz > 401)
  {
    Serial.println("dia");
  Serial.println(luz);
    Serial.println(temperatura);
    }
    

  delay(2000);

   Serial.println(tm);

     delay(2000);


}










 
