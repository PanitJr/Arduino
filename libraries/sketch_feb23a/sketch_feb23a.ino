const int A=0;
int val;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
 val = analogRead(A);
Serial.println(val);
delay(500);
}
