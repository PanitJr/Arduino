const int blue = 3;
const int green = 5;
const int red = 6;
void setup() {
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(red,OUTPUT);
}

void loop() {
analogWrite(blue,random(255));
analogWrite(green,random(255));
analogWrite(red,random(255));
 delay(1000);
}
