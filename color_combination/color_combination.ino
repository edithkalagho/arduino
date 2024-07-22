void setup() {
  // put your setup code here, to run once:
//blue pin 7
// green pin 6
// red pin 5

pinMode(7, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
delay(2000);
digitalWrite(7, HIGH);
digitalWrite(5, HIGH);
delay(2000);
digitalWrite(7, LOW);
digitalWrite(5, LOW);

digitalWrite(7, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
delay(2000);
digitalWrite(7, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);

digitalWrite(6, HIGH);
digitalWrite(5, HIGH);
delay(2000);
digitalWrite(6, LOW);
digitalWrite(5, LOW);



}
