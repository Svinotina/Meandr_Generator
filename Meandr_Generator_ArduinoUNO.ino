int out = 13;

void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
pinMode(13, OUTPUT);

digitalWrite(out, HIGH);
delay(10);
digitalWrite(out, LOW);
delay(10);
}
