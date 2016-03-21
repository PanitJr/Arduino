
const int d = 5000;
const int red = 11;
const int yello = 12;
const int green = 13;
const int greenPeople = 10;
const int redPeople = 9;
const int buttonPin = 2; 

int buttonState = 0;  
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(green, OUTPUT);
  pinMode(yello, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(greenPeople, OUTPUT);
  pinMode(redPeople, OUTPUT);
  pinMode(buttonPin, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    // turn LED on:
    
    digitalWrite(green, HIGH);
    digitalWrite(yello, LOW);
    delay(3000);
    digitalWrite(red, LOW);
    digitalWrite(redPeople, HIGH);
    digitalWrite(greenPeople, LOW);
    digitalWrite(yello, HIGH);
    delay(6000);
    warning();
    delay(1000);
  } else {
    // turn LED off:
   
    digitalWrite(green, LOW);
    digitalWrite(yello, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(greenPeople, HIGH);
    digitalWrite(redPeople, LOW);
    
  }
  }
  void warning(){
    digitalWrite(yello, LOW);
    delay(500);
    digitalWrite(yello, HIGH);
    delay(500);
    digitalWrite(yello, LOW);
     delay(500);
    digitalWrite(yello, HIGH);
    delay(500);
    digitalWrite(yello, LOW);
     delay(500);
    digitalWrite(yello, HIGH);
    delay(500);
    digitalWrite(yello, LOW);
    }
  
