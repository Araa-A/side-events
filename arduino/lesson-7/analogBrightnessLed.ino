// Variables
int redPin = 3;
int longDelay = 500;
int bright = 255;
int dim = 120;
int low = 30;
int off = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i = 0; i < 3; i++) {
analogWrite(redPin,low);
delay(longDelay);
analogWrite(redPin,dim);
delay(longDelay);
analogWrite(redPin,bright);
delay(longDelay);
analogWrite(redPin,dim);
delay(longDelay);
analogWrite(redPin,low);
delay(longDelay);
analogWrite(redPin,off);
delay(longDelay);
}
}
