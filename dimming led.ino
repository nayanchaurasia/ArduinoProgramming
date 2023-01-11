// This code is used to control the brightness of the led 
int potpin=A1;
int ledpin=11;
int potval;
int ledval;
int dt=1000;
void setup() {
  // put your setup code here, to run once:
pinMode(potpin,INPUT);
pinMode(ledpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
potval=analogRead(potpin);
ledval=(255./1023.)*potval;
analogWrite(ledpin,ledval);
Serial.println(ledval);
}
