// C++ code
const int motor=2; // connecting with D2 pin
void setup()
{
  Serial.begin(9600); //set the baud rate of serial communication to 9600
  pinMode(motor, OUTPUT); // setting the D2 pin as Output
}

void loop()
{
  if(Serial.available()){ // checking for the available byte stream
  char byte_in= Serial.read(); // taking the byte input and changing it into character 
    switch(byte_in){
      // clockwise -> red(+) black(-)
      case '0': digitalWrite(motor,LOW); // when zero is pressed the motor stops
      break;
      case '1': digitalWrite(motor,HIGH); // when one is pressed the motor starts 
      break;
    }
  }
}