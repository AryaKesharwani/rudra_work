int led1 = 3; // connetion to the D3 pin 
void setup() {
  pinMode(led1,OUTPUT); // setting the variable as output pin of Arduino 
}

void loop() {
  digitalWrite(led1,HIGH);
  delay(1000);
  digitalWrite(led1,LOW);
  delay(1000);
}