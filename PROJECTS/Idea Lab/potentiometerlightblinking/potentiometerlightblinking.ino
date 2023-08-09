int pot=A0;
void setup() {
  // put your setup code here, to run 
 pinMode(A0,INPUT);
 pinMode(10,OUTPUT);
 Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
   int i =analogRead(pot);
  Serial.println(i);
  // delay(1000);
  analogWrite(10,i/4);
}
