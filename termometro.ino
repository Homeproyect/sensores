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

switch (temperatura )


 {


case 276:

Serial.println("34.9 grados");
break;
case 275: 

Serial.println("34.8 grados");
break;
case 274: 

Serial.println("34.7 grados");
break;
case 273: 

Serial.println("34.6 grados");
break;
case 272: 

Serial.println("34.5 grados");
break;
case 271: 

Serial.println("34.4 grados");
break;
case 270: 

Serial.println("34.3 grados");
break;
case 269: 

Serial.println("34.2 grados");
break;
case 268: 

Serial.println("34.1 grados");
break;
case 267: 

Serial.println("34.0 grados");
break;
case 266:

Serial.println("33.9 grados");
break;
case 265: 

Serial.println("33.8 grados");
break;
case 264: 

Serial.println("33.7 grados");
break;
case 263: 

Serial.println("33.6 grados");
break;
case 262: 

Serial.println("33.5 grados");
break;
case 261: 

Serial.println("33.4 grados");
break;
case 260: 

Serial.println("33.3 grados");
break;
case 259: 

Serial.println("33.2 grados");
break;
case 258: 

Serial.println("33.1 grados");
break;
case 257: 

Serial.println("33.0 grados");
break;
case 256:

Serial.println("32.9 grados");
break;
case 255: 

Serial.println("32.8 grados");
break;
case 254: 

Serial.println("32.7 grados");
break;
case 253: 

Serial.println("32.6 grados");
break;
case 252: 

Serial.println("32.5 grados");
break;
case 251: 

Serial.println("32.4 grados");
break;
case 250: 

Serial.println("32.3 grados");
break;
case 249: 

Serial.println("32.2 grados");
break;
case 248: 

Serial.println("32.1 grados");
break;
case 247: 

Serial.println("32.0 grados");
break;
case 246:

Serial.println("31.9 grados");
break;
case 245: 

Serial.println("31.8 grados");
break;
case 244: 

Serial.println("31.7 grados");
break;
case 243: 

Serial.println("31.6 grados");
break;
case 242: 

Serial.println("31.5 grados");
break;
case 241: 

Serial.println("31.4 grados");
break;
case 240: 

Serial.println("31.3 grados");
break;
case 239: 

Serial.println("31.2 grados");
break;
case 238: 

Serial.println("31.1 grados");
break;
case 237: 

Serial.println("31.0 grados");
break;
case 236:

Serial.println("30.9 grados");
break;
case 235: 

Serial.println("30.8 grados");
break;
case 234: 

Serial.println("30.7 grados");
break;
case 233: 

Serial.println("30.6 grados");
break;
case 232: 

Serial.println("30.5 grados");
break;
case 231: 

Serial.println("30.4 grados");
break;
case 230: 

Serial.println("30.3 grados");
break;
case 229: 

Serial.println("30.2 grados");
break;
case 228: 

Serial.println("30.1 grados");
break;
case 227: 

Serial.println("30.0 grados");
break;
case 226:

Serial.println("29.9 grados");
break;
case 225: 

Serial.println("29.8 grados");
break;
case 224: 

Serial.println("29.7 grados");
break;
case 223: 

Serial.println("29.6 grados");
break;
case 222: 

Serial.println("29.5 grados");
break;
case 221: 

Serial.println("29.4 grados");
break;
case 220: 

Serial.println("29.3 grados");
break;
case 219: 

Serial.println("29.2 grados");
break;
case 218: 

Serial.println("29.1 grados");
break;
case 217: 

Serial.println("29.0 grados");
break;
case 216:

Serial.println("28.9 grados");
break;
case 215: 

Serial.println("28.8 grados");
break;
case 214: 

Serial.println("28.7 grados");
break;
case 213: 

Serial.println("28.6 grados");
break;
case 212: 

Serial.println("28.5 grados");
break;
case 211: 

Serial.println("28.4 grados");
break;
case 210: 

Serial.println("28.3 grados");
break;
case 209: 

Serial.println("28.2 grados");
break;
case 208: 

Serial.println("28.1 grados");
break;
case 207: 

Serial.println("28.0 grados");
break;
case 206:

Serial.println("27.9 grados");
break;
case 205: 

Serial.println("27.8 grados");
break;
case 204: 

Serial.println("27.7 grados");
break;
case 203: 

Serial.println("27.6 grados");
break;
case 202: 

Serial.println("27.5 grados");
break;
case 201: 

Serial.println("27.4 grados");
break;
case 200: 

Serial.println("27.3 grados");
break;
case 199: 

Serial.println("27.2 grados");
break;
case 198: 

Serial.println("27.1 grados");
break;
case 197: 

Serial.println("27.0 grados");
break;
case 196:

Serial.println("26.9 grados");
break;
case 195: 

Serial.println("26.8 grados");
break;
case 194: 

Serial.println("26.7 grados");
break;
case 193: 

Serial.println("26.6 grados");
break;
case 192: 

Serial.println("26.5 grados");
break;
case 191: 

Serial.println("26.4 grados");
break;
case 190: 

Serial.println("26.3 grados");
break;
case 189: 

Serial.println("26.2 grados");
break;
case 188: 

Serial.println("26.1 grados");
break;
case 187: 

Serial.println("26.0 grados");
break;
case 186:

Serial.println("25.9 grados");
break;
case 185: 

Serial.println("25.8 grados");
break;
case 184: 

Serial.println("25.7 grados");
break;
case 183: 

Serial.println("25.6 grados");
break;
case 182: 

Serial.println("25.5 grados");
break;
case 181: 

Serial.println("25.4 grados");
break;
case 180: 

Serial.println("25.3 grados");
break;
case 179: 

Serial.println("25.2 grados");
break;
case 178: 

Serial.println("25.1 grados");
break;
case 177:

Serial.println("25.0 grados");
break;

 }

 
 delay(2000);


    
  

  
  
}
