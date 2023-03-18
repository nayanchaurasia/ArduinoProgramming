// 5v directly to the one side
// another side the 10kohm resistor and the button pin
// led with thw 8th pin
int ledpin=8;
int dt=100;
int buttonpin=12;
int buttonew;
int buttonold=0;
int ledstate=0;
void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);
pinMode(buttonpin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonew=digitalRead(buttonpin);
Serial.println("buttonew");
Serial.println(buttonew);
Serial.println("buttonold");
Serial.println(buttonold);
if (buttonew==1 && buttonold==0){
  if (ledstate==1){
    digitalWrite(ledpin,LOW);
    ledstate=0;
  }
  else{
    digitalWrite(ledpin,HIGH);
    ledstate=1;
  }
}
buttonold=buttonew;
delay(100);
}
