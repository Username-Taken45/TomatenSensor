/*
*/

int knop = 2;         
int waterpomp =  13;      
int toestandknop = 0; 
int led = 4;

/*
 
*/
void setup() {
  pinMode(waterpomp, OUTPUT); 
  pinMode(knop, INPUT);
  pinMode(led, OUTPUT);   
}

/*

*/
void loop() {
  toestandknop = digitalRead(knop); 
  if (toestandknop == HIGH) {       
    digitalWrite(waterpomp, HIGH);
    digitalWrite(led, HIGH);
    delay (5000);      
  }
  else {
    digitalWrite(waterpomp, LOW); 
    digitalWrite(led, LOW);      
  }
}

/*
  
*/
