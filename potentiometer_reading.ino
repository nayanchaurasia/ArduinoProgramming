int potval;
float V2;
int ledpin=11;
int ledval;
int potpin=A1;
int dt=1000;
void setup() {
  // put your setup code here, to run once:
pinMode(potpin,INPUT);
Serial.begin(9600);
pinMode(ledpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
potval=analogRead(potpin);
ledval=(255./1023.)*potval;
analogWrite(ledpin,ledval);
V2=(5./1023.)*potval;
Serial.println(potval);
Serial.println(V2);
delay(100);
}
