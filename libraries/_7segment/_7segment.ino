const int aPin = 13;
const int bPin = 12;
const int cPin = 11;
const int dPin = 10;
const int ePin = 9;
const int fPin = 8;
const int gPin = 7;
const int buttonPin = 2;
int buttonState = 0;
int num=0;
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
void sevenSegment(int num){
  if(num == 0){
  digitalWrite(aPin,LOW);
  digitalWrite(bPin,LOW);
  digitalWrite(cPin,LOW);
  digitalWrite(dPin,LOW);
  digitalWrite(ePin,LOW);
  digitalWrite(fPin,LOW);
  digitalWrite(gPin,HIGH);
  }if(num == 1){
  digitalWrite(aPin,HIGH);
  digitalWrite(bPin,LOW);
  digitalWrite(cPin,LOW);
  digitalWrite(dPin,HIGH);
  digitalWrite(ePin,HIGH);
  digitalWrite(fPin,HIGH);
  digitalWrite(gPin,HIGH);
  }if(num == 2){
  digitalWrite(aPin,LOW);
  digitalWrite(bPin,LOW);
  digitalWrite(cPin,HIGH);
  digitalWrite(dPin,LOW);
  digitalWrite(ePin,LOW);
  digitalWrite(fPin,HIGH);
  digitalWrite(gPin,LOW);
  }if(num == 3){
  digitalWrite(aPin,LOW);
  digitalWrite(bPin,LOW);
  digitalWrite(cPin,LOW);
  digitalWrite(dPin,LOW);
  digitalWrite(ePin,HIGH);
  digitalWrite(fPin,HIGH);
  digitalWrite(gPin,LOW);
  }if(num == 4){
  digitalWrite(aPin,HIGH);
  digitalWrite(bPin,LOW);
  digitalWrite(cPin,LOW);
  digitalWrite(dPin,HIGH);
  digitalWrite(ePin,HIGH);
  digitalWrite(fPin,LOW);
  digitalWrite(gPin,LOW);
  }if(num == 5){
  digitalWrite(aPin,LOW);
  digitalWrite(bPin,HIGH);
  digitalWrite(cPin,LOW);
  digitalWrite(dPin,LOW);
  digitalWrite(ePin,HIGH);
  digitalWrite(fPin,LOW);
  }if(num == 6){
  digitalWrite(aPin,LOW);
  digitalWrite(bPin,HIGH);
  digitalWrite(cPin,LOW);
  digitalWrite(dPin,LOW);
  digitalWrite(ePin,LOW);
  digitalWrite(fPin,LOW);
  digitalWrite(gPin,LOW);
  }if(num == 7){
  digitalWrite(aPin,LOW);
  digitalWrite(bPin,LOW);
  digitalWrite(cPin,LOW);
  digitalWrite(dPin,HIGH);
  digitalWrite(ePin,HIGH);
  digitalWrite(fPin,HIGH);
  digitalWrite(gPin,HIGH);
  }if(num == 8){
digitalWrite(aPin,LOW);
  digitalWrite(bPin,LOW);
  digitalWrite(cPin,LOW);
  digitalWrite(dPin,LOW);
  digitalWrite(ePin,LOW);
  digitalWrite(fPin,LOW);
  digitalWrite(gPin,LOW);
  }if(num == 9){
  digitalWrite(aPin,LOW);
  digitalWrite(bPin,LOW);
  digitalWrite(cPin,LOW);
  digitalWrite(dPin,LOW);
  digitalWrite(ePin,HIGH);
  digitalWrite(fPin,LOW);
  digitalWrite(gPin,LOW);
  }
}

void loop() {
  
  if(digitalRead(buttonPin)==HIGH){
      sevenSegment(num);
      }else {
    sevenSegment(num);
    num++;
    delay(500);}
    
    if(num >= 9){num=0;}
 
    }

