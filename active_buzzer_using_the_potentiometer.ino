int potpin=A0;
int buzzpin=4;
int potval;
float V2;
void setup() {
  // put your setup code here, to run once:
pinMode(potpin,INPUT);
pinMode(buzzpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
potval=analogRead(potpin);
Serial.println(potval);
V2=(5./1023.)*potval;
Serial.println(V2);
delay(100);
if (V2>=2.5 && V2<=3.5){
  digitalWrite(buzzpin,HIGH);
}

if (V2>3.5){
  digitalWrite(buzzpin,LOW);
}
}
