//digital adjust
int blueVal;
int greenVal;
int redVal;
const int blue = 3;
const int green = 5;
const int red = 6;
const int buttonPin = 2;
int buttonState = 0;
void setup() {
  
  Serial.begin(9600);

  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(red,OUTPUT);

  pinMode(buttonPin, INPUT);
}

void loop() {
  
  buttonState = digitalRead(buttonPin);
  Serial.write("buttonState: ");
  Serial.println(buttonState);
  while(buttonState > 0){
    analogWrite(blue,blueVal);
    analogWrite(green,greenVal);
    analogWrite(red,redVal);
    delay(500);
    digitalWrite(blue,HIGH);
    digitalWrite(green,HIGH);
    digitalWrite(red,HIGH);
    delay(500);
    buttonState = digitalRead(buttonPin);
    }
  int adjustBlue = analogRead(A0);
  int adjustGreen = analogRead(A1);
  int adjustRed = analogRead(A2);
  
  blueVal = map(adjustBlue,0,1023,0,255);
  greenVal = map(adjustGreen,0,1023,0,255);
  redVal = map(adjustRed,0,1023,0,255);
  
  Serial.write("blue: ");
  Serial.println(255-blueVal);
  Serial.write("green: ");
  Serial.println(255-greenVal);
  Serial.write("red: ");
  Serial.println(255-redVal);
  Serial.println("");
  
  analogWrite(blue,blueVal);
  analogWrite(green,greenVal);
  analogWrite(red,redVal);
  
  delay(1000);
  
  
}
