//Ejercicio 3 en function

int leds[]={2,3,4,5,6,7,8,9};
int tiempo=200;
int grupo1=0;

void setup(){ //comienza la configuracion
  for (grupo1=0;grupo1<8;grupo1++){
  pinMode (leds[grupo1], OUTPUT);
 }
 }
//Inicio de la funcion 1
 void conteo() { 
  for (grupo1=0; grupo1<7; grupo1++) {
    digitalWrite (leds[grupo1], HIGH);
    delay (100);
    digitalWrite (leds[grupo1], LOW);
    delay (100);
  }
 }
 //Fin de la funcion 1
 
 //Inicio de la funcion 2
 void reversa(){
  for (grupo1=7;grupo1>=0;grupo1--) {
    digitalWrite (leds[grupo1], HIGH);
    delay (100);
    digitalWrite (leds[grupo1], LOW);
    delay (100);
 }  
}
//Fin de la funcion 2

//Inicio de la funcion 3
void salto(){
  for (grupo1=0;grupo1<=8; grupo1 = grupo1 + 2) {
    digitalWrite (leds[grupo1], HIGH);
    delay (200);
    digitalWrite (leds[grupo1], LOW);
    delay (200);
 }  
}
//Fin de la funcion 3

//Inicio de la funcion 4
void typ_prenden(){
  for (grupo1=0; grupo1<=8; grupo1 ++) {
    digitalWrite (leds[grupo1], HIGH);
    }
    delay (300);
  }
void typ_apagan(){
  for (grupo1=0; grupo1<=8; grupo1 ++) {
    digitalWrite (leds[grupo1], LOW);
    }
    delay (500);
  }

void completa(){
    for(int grupo1 = 0; grupo1 < 2; grupo1 ++){
     typ_prenden();
     typ_apagan();
     }
    }
//Fin de la funcion 4
//Llamado de las funciones
void loop() {
  conteo();
  reversa();
  salto();
  typ_prenden();
  typ_apagan();
  completa();
}