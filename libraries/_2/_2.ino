const int aPin = 13;
const int bPin = 12;
const int cPin = 11;
const int dPin = 10;
const int ePin = 9;
const int fPin = 8;
const int gPin = 7;
const int buttonPin = 2;
int buttonState = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(aPin,OUTPUT);
pinMode(bPin,OUTPUT);
pinMode(cPin,OUTPUT);
pinMode(dPin,OUTPUT);
pinMode(ePin,OUTPUT);
pinMode(fPin,OUTPUT);
pinMode(gPin,OUTPUT);
pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
  digitalWrite(aPin,LOW);
  digitalWrite(bPin,LOW);
  digitalWrite(cPin,LOW);
  digitalWrite(dPin,LOW);
  digitalWrite(ePin,LOW);
  digitalWrite(fPin,LOW);
  digitalWrite(gPin,HIGH);
delay(1000);
  digitalWrite(aPin,HIGH);
  digitalWrite(bPin,LOW);
  digitalWrite(cPin,LOW);
  digitalWrite(dPin,HIGH);
  digitalWrite(ePin,HIGH);
  digitalWrite(fPin,HIGH);
  digitalWrite(gPin,HIGH);
delay(1000);
  digitalWrite(aPin,LOW);
  digitalWrite(bPin,LOW);
  digitalWrite(cPin,HIGH);
  digitalWrite(dPin,LOW);
  digitalWrite(ePin,LOW);
  digitalWrite(fPin,HIGH);
  digitalWrite(gPin,LOW);
delay(1000);
  digitalWrite(aPin,LOW);
  digitalWrite(bPin,LOW);
  digitalWrite(cPin,LOW);
  digitalWrite(dPin,LOW);
  digitalWrite(ePin,HIGH);
  digitalWrite(fPin,HIGH);
  digitalWrite(gPin,LOW);
delay(1000);
  digitalWrite(aPin,HIGH);
  digitalWrite(bPin,LOW);
  digitalWrite(cPin,LOW);
  digitalWrite(dPin,HIGH);
  digitalWrite(ePin,HIGH);
  digitalWrite(fPin,LOW);
  digitalWrite(gPin,LOW);
delay(1000);
  digitalWrite(aPin,LOW);
  digitalWrite(bPin,HIGH);
  digitalWrite(cPin,LOW);
  digitalWrite(dPin,LOW);
  digitalWrite(ePin,HIGH);
  digitalWrite(fPin,LOW);
  digitalWrite(gPin,LOW);
delay(1000);
  digitalWrite(aPin,LOW);
  digitalWrite(bPin,HIGH);
  digitalWrite(cPin,LOW);
  digitalWrite(dPin,LOW);
  digitalWrite(ePin,LOW);
  digitalWrite(fPin,LOW);
  digitalWrite(gPin,LOW);
delay(1000);
  digitalWrite(aPin,LOW);
  digitalWrite(bPin,LOW);
  digitalWrite(cPin,LOW);
  digitalWrite(dPin,HIGH);
  digitalWrite(ePin,HIGH);
  digitalWrite(fPin,HIGH);
  digitalWrite(gPin,HIGH);
delay(1000);
digitalWrite(aPin,LOW);
  digitalWrite(bPin,LOW);
  digitalWrite(cPin,LOW);
  digitalWrite(dPin,LOW);
  digitalWrite(ePin,LOW);
  digitalWrite(fPin,LOW);
  digitalWrite(gPin,LOW);
delay(1000);
  digitalWrite(aPin,LOW);
  digitalWrite(bPin,LOW);
  digitalWrite(cPin,LOW);
  digitalWrite(dPin,LOW);
  digitalWrite(ePin,HIGH);
  digitalWrite(fPin,LOW);
  digitalWrite(gPin,LOW);
delay(1000);
} else {
digitalWrite(aPin,LOW);
  digitalWrite(bPin,LOW);
  digitalWrite(cPin,LOW);
  digitalWrite(dPin,LOW);
  digitalWrite(ePin,LOW);
  digitalWrite(fPin,LOW);
  digitalWrite(gPin,HIGH);
buttonState = digitalRead(buttonPin);
  }

}
