int red = 3;
int yellow = 4;
int green = 5;
int button = 7;

void changelights(){
  digitalWrite(green , LOW);
  digitalWrite(yellow , HIGH);
  digitalWrite(red , LOW);
  delay(3000);
  
  digitalWrite(green , LOW);
  digitalWrite(yellow , LOW);
  digitalWrite(red , HIGH);
   delay(4000);
  
   digitalWrite(green , LOW);
  digitalWrite(yellow , HIGH);
  digitalWrite(red , HIGH);
   delay(2000);

   digitalWrite(green , HIGH);
  digitalWrite(yellow , LOW);
  digitalWrite(red , LOW);
  delay(3000);
  
}

void setup(){
  pinMode (red, OUTPUT);
  pinMode (yellow, OUTPUT);
  pinMode (green, OUTPUT);
  
  pinMode(button, INPUT);
   digitalWrite(green, HIGH);
   digitalWrite(red, LOW);
   digitalWrite(yellow, LOW);
}
void loop(){
  changelights();
  delay(12000);
   if (digitalRead(button) == HIGH){
       delay(15); // software debounce
       if (digitalRead(button) == HIGH) {
           // if the switch is HIGH, ie. pushed down - change the lights!
           changelights();
           delay(10000);
       }
   }
}
