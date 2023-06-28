int entrada = 10;

int salida = 11;

int tiempo;

int distancia;


void setup() {
  Serial.begin(9600);

  pinMode(entrada, INPUT);

   pinMode(salida, OUTPUT);

   

}

void loop() {

  digitalWrite(salida , HIGH);
  delay(1);
  digitalWrite(salida , LOW);

  tiempo = pulseIn(entrada , HIGH);

  distancia = tiempo /58.2 ;

  Serial.println(distancia);

 Serial.println("cm");
  delay(2000);

}
