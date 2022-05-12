//buzzer program//

void setup() {
  pinMode(13,OUTPUT);
}


void loop() {
  tone(13,200,100);
  delay(3);//wait for second(s)
  tone(13,300,250);
  delay(2);//wait for second(s)

}
