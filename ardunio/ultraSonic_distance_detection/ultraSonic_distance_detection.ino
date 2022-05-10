const int echoPin =3 ; // connetion with the D3 pin
const int trigger =2; // connection with the D2 pin
void setup(){
    Serial.begin(9600); //set the baud rate of serial communication to 9600
    pinMode(trigger,OUTPUT); // setting the D3 pin as Output
    pinMode(echoPin,INPUT); // setting the D2 pin as Output
}

void loop(){
    long duration,distanceInCentimeters; // declare variables to hold duration and distance
    digitalWrite(trigger,LOW); // sending waves form the trigger 
    delay(2);
    digitalWrite(trigger,HIGH);
    delay(10);
    digitalWrite(trigger,LOW);
    duration=pulseIn(echoPin,HIGH);
    distanceInCentimeters=(duration*0.034)/2; //calculation of distance of obstacle
    Serial.println(distanceInCentimeters);
    delay(100);
}