int ledPin=8;
int dit=100;
int dah=500;
int longW=1000;

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //S
digitalWrite(ledPin,HIGH);
delay(dit);
digitalWrite(ledPin,LOW);
delay(dit);
digitalWrite(ledPin,HIGH);
delay(dit);
digitalWrite(ledPin,LOW);
delay(dit);
digitalWrite(ledPin,HIGH);
delay(dit);
digitalWrite(ledPin,LOW);
delay(dit);
// O
digitalWrite(ledPin,HIGH);
delay(dah);
digitalWrite(ledPin,LOW);
delay(dah);
digitalWrite(ledPin,HIGH);
delay(dah);
digitalWrite(ledPin,LOW);
delay(dah);
digitalWrite(ledPin,HIGH);
delay(dah);
digitalWrite(ledPin,LOW);
delay(dah);

//S
digitalWrite(ledPin,HIGH);
delay(dit);
digitalWrite(ledPin,LOW);
delay(dit);
digitalWrite(ledPin,HIGH);
delay(dit);
digitalWrite(ledPin,LOW);
delay(dit);
digitalWrite(ledPin,HIGH);
delay(dit);
digitalWrite(ledPin,LOW);
delay(dit);

//Delay

delay(longW);
}
