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
digitalWrite(redPin,LOW);
digitalWrite(bluePin,LOW);
digitalWrite(greenPin,LOW);
digitalWrite(yellowPin,LOW);
delay(longDelay);
// 0001
digitalWrite(redPin,LOW);
digitalWrite(bluePin,LOW);
digitalWrite(greenPin,LOW);
digitalWrite(yellowPin,HIGH);
delay(longDelay);

digitalWrite(redPin,LOW);
digitalWrite(bluePin,LOW);
digitalWrite(greenPin,LOW);
digitalWrite(yellowPin,LOW);
delay(medDelay);

// 0010
digitalWrite(redPin,LOW);
digitalWrite(bluePin,LOW);
digitalWrite(greenPin,HIGH);
digitalWrite(yellowPin,LOW);
delay(longDelay);

digitalWrite(redPin,LOW);
digitalWrite(bluePin,LOW);
digitalWrite(greenPin,LOW);
digitalWrite(yellowPin,LOW);
delay(medDelay);

// 0010
digitalWrite(redPin,LOW);
digitalWrite(bluePin,LOW);
digitalWrite(greenPin,LOW);
digitalWrite(yellowPin,HIGH);
delay(longDelay);

digitalWrite(redPin,LOW);
digitalWrite(bluePin,LOW);
digitalWrite(greenPin,LOW);
digitalWrite(yellowPin,LOW);
delay(medDelay);

// 0011
digitalWrite(redPin,LOW);
digitalWrite(bluePin,LOW);
digitalWrite(greenPin,HIGH);
digitalWrite(yellowPin,HIGH);
delay(longDelay);

digitalWrite(redPin,LOW);
digitalWrite(bluePin,LOW);
digitalWrite(greenPin,LOW);
digitalWrite(yellowPin,LOW);
delay(medDelay);

// 0100
digitalWrite(redPin,LOW);
digitalWrite(bluePin,HIGH);
digitalWrite(greenPin,LOW);
digitalWrite(yellowPin,LOW);
delay(longDelay);

digitalWrite(redPin,LOW);
digitalWrite(bluePin,LOW);
digitalWrite(greenPin,LOW);
digitalWrite(yellowPin,LOW);
delay(medDelay);

// 0101
digitalWrite(redPin,LOW);
digitalWrite(bluePin,HIGH);
digitalWrite(greenPin,LOW);
digitalWrite(yellowPin,HIGH);
delay(longDelay);

digitalWrite(redPin,LOW);
digitalWrite(bluePin,LOW);
digitalWrite(greenPin,LOW);
digitalWrite(yellowPin,LOW);
delay(medDelay);

// 0110
digitalWrite(redPin,LOW);
digitalWrite(bluePin,HIGH);
digitalWrite(greenPin,HIGH);
digitalWrite(yellowPin,LOW);
delay(longDelay);

digitalWrite(redPin,LOW);
digitalWrite(bluePin,LOW);
digitalWrite(greenPin,LOW);
digitalWrite(yellowPin,LOW);
delay(medDelay);

// 0111
digitalWrite(redPin,LOW);
digitalWrite(bluePin,HIGH);
digitalWrite(greenPin,HIGH);
digitalWrite(yellowPin,HIGH);
delay(longDelay);

digitalWrite(redPin,LOW);
digitalWrite(bluePin,LOW);
digitalWrite(greenPin,LOW);
digitalWrite(yellowPin,LOW);
delay(medDelay);

// 1000
digitalWrite(redPin,HIGH);
digitalWrite(bluePin,LOW);
digitalWrite(greenPin,LOW);
digitalWrite(yellowPin,LOW);
delay(longDelay);

digitalWrite(redPin,LOW);
digitalWrite(bluePin,LOW);
digitalWrite(greenPin,LOW);
digitalWrite(yellowPin,LOW);
delay(medDelay);

// 1001
digitalWrite(redPin,HIGH);
digitalWrite(bluePin,LOW);
digitalWrite(greenPin,LOW);
digitalWrite(yellowPin,HIGH);
delay(longDelay);

digitalWrite(redPin,LOW);
digitalWrite(bluePin,LOW);
digitalWrite(greenPin,LOW);
digitalWrite(yellowPin,LOW);
delay(medDelay);

// 1010
digitalWrite(redPin,HIGH);
digitalWrite(bluePin,LOW);
digitalWrite(greenPin,HIGH);
digitalWrite(yellowPin,LOW);
delay(longDelay);

digitalWrite(redPin,LOW);
digitalWrite(bluePin,LOW);
digitalWrite(greenPin,LOW);
digitalWrite(yellowPin,LOW);
delay(medDelay);

// 1011
digitalWrite(redPin,HIGH);
digitalWrite(bluePin,LOW);
digitalWrite(greenPin,HIGH);
digitalWrite(yellowPin,HIGH);
delay(longDelay);

digitalWrite(redPin,LOW);
digitalWrite(bluePin,LOW);
digitalWrite(greenPin,LOW);
digitalWrite(yellowPin,LOW);
delay(medDelay);

// 1100
digitalWrite(redPin,HIGH);
digitalWrite(bluePin,HIGH);
digitalWrite(greenPin,LOW);
digitalWrite(yellowPin,LOW);
delay(longDelay);

digitalWrite(redPin,LOW);
digitalWrite(bluePin,LOW);
digitalWrite(greenPin,LOW);
digitalWrite(yellowPin,LOW);
delay(medDelay);

// 1101
digitalWrite(redPin,HIGH);
digitalWrite(bluePin,HIGH);
digitalWrite(greenPin,LOW);
digitalWrite(yellowPin,HIGH);
delay(longDelay);

digitalWrite(redPin,LOW);
digitalWrite(bluePin,LOW);
digitalWrite(greenPin,LOW);
digitalWrite(yellowPin,LOW);
delay(medDelay);

// 1110
digitalWrite(redPin,HIGH);
digitalWrite(bluePin,HIGH);
digitalWrite(greenPin,HIGH);
digitalWrite(yellowPin,LOW);
delay(longDelay);

digitalWrite(redPin,LOW);
digitalWrite(bluePin,LOW);
digitalWrite(greenPin,LOW);
digitalWrite(yellowPin,LOW);
delay(medDelay);

// 1111
digitalWrite(redPin,HIGH);
digitalWrite(bluePin,HIGH);
digitalWrite(greenPin,HIGH);
digitalWrite(yellowPin,HIGH);
delay(longDelay);

digitalWrite(redPin,LOW);
digitalWrite(bluePin,LOW);
digitalWrite(greenPin,LOW);
digitalWrite(yellowPin,LOW);
delay(medDelay);
}

}
