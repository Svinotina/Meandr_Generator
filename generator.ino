int out = 13;
double timer;
int loopTime = 1000;
int freq = 100;
int i = 0;
int counter = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  timer = (1000.0/freq)/2.0;
  unsigned long currentMillis = millis();
  pinMode(13, OUTPUT);

   while(millis()- currentMillis <= loopTime){
     digitalWrite(out, HIGH);
     delay(timer);
     digitalWrite(out, LOW);
     delay(timer);
     }
//   Serial.print("timer = ");
//   Serial.println(timer);
//   Serial.print("f = ");
//   Serial.println(freq);

   if((counter/10)<1){
    freq = freq + 10;
    i = i + 1;
   }
   else{
    freq = freq - 10;
    i = i - 1;
   }
   
   if(counter == 20){
    counter = 1;
    freq = 110;
    i = 1;
   }
   else{
    counter++;
   }

}
