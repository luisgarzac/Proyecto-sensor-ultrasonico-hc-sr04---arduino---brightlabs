long distancia;
long tiempo; 

void setup() {
Serial.begin(9600);
pinMode(5,OUTPUT);
pinMode(4,INPUT);
}

void loop() {
digitalWrite(5,LOW);
delayMicroseconds(5);
digitalWrite(5,HIGH);
delayMicroseconds(10);
digitalWrite(5,LOW);

tiempo=pulseIn(4,HIGH);
distancia=int(0.017*tiempo);
Serial.println("Distancia");
Serial.println(distancia);
Serial.println("cm");
delay(1000);

}
