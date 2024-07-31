// LED pin numbers
int redPin = 8;
int bluePin = 7;
int greenPin = 6;
int yellowPin = 5;

// delay times(ms)
int longDelay = 500;
int medDelay = 300;
int shortDelay = 100;
int shorterDelay = 50;

void setup() {
  // put your setup code here, to run once:

pinMode(redPin,OUTPUT);
pinMode(bluePin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(yellowPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

// loop red 3 times with longDelay
for(int i = 0; i < 3; i++) {
digitalWrite(redPin,HIGH);
delay(longDelay);
digitalWrite(redPin,LOW);
delay(longDelay);
}

// loop blue 5 times with medDelay
for(int i = 0; i < 5; i++) {
digitalWrite(bluePin,HIGH);
delay(medDelay);
digitalWrite(bluePin,LOW);
delay(medDelay);
}

// loop green 8 times with shortDelay
for(int i = 0; i < 8; i++) {
digitalWrite(greenPin,HIGH);
delay(shortDelay);
digitalWrite(greenPin,LOW);
delay(shortDelay);
}

// loop green 8 times with shortDelay
for(int i = 0; i < 10; i++) {
digitalWrite(yellowPin,HIGH);
delay(shorterDelay);
digitalWrite(yellowPin,LOW);
delay(shorterDelay);
}

}
