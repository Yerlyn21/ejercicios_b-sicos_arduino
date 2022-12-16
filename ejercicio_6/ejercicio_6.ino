int b = 0;
int tiempo = 500;

void setup() {
Serial.begin(9600);
  for (int  b = 0; b<5; b ++){
    pinMode(leds[b], OUTPUT);
    pinMode(zumbador, OUTPUT);
    pinMode(pulsador, INPUT);
   }
}

void zumbador_pulsador () {
  if(digitalRead(pulsador) == HIGH && b == 2){
 digitalWrite(zumbador, HIGH);
        delay(tiempo);
 digitalWrite(zumbador, HIGH);
        delay(tiempo);
        tiempo = tiempo -20;
     if (tiempo >10){
       }
   } 
}

void loop() {
 for (int  b = 0; b < 5; b ++){
  digitalWrite(leds[b],HIGH);
    delay(tiempo);
  digitalWrite(leds[b], LOW);
    delay(tiempo);
  zumbador_pulsador (); 
 }
}
