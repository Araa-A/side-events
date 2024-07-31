// LED pin numbers
int redPin = 2;
int bluePin = 3;
int greenPin = 4;
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

  // testing LEDs
digitalWrite(redPin, HIGH);
digitalWrite(bluePin, HIGH);
digitalWrite(greenPin, HIGH);
digitalWrite(yellowPin, HIGH);

}
