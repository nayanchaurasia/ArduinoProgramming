// this code works between 0 to 3.20 voltage as potentionmerter range of mine  (0 to 1.5 voltage)
// green when voltage is under operation(working voltage )                     (1.5 to 2 volt)
// yellow to avoid to go further                                               (2 to 2.5 volt)
// blue ............danger zone arriving                                       (2.5 to 3 volt)
// red light ......danger zone....                                             (more then three)
int potval;
float V2;
int redpin=12;
int bpin=11;
int ypin=10;
int gpin=9;
int potpin=A1;
int dt=1000;
void setup() {
  // put your setup code here, to run once:
pinMode(potpin,INPUT);
Serial.begin(9600);
pinMode(redpin,OUTPUT);
pinMode(bpin,OUTPUT);
pinMode(ypin,OUTPUT);
pinMode(gpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
potval=analogRead(potpin);
V2=(5./1023.)*potval;
Serial.println(V2);
// green pin

if (V2<1.5){
digitalWrite(gpin,HIGH);
  }
if (V2>=1.5){
  digitalWrite(gpin,LOW);
}
// yellow pin

if (V2>=1.5 && V2<2.0){
digitalWrite(ypin,HIGH);
  }
if (V2>2.0 || V2<1.5){
  digitalWrite(ypin,LOW);
}

//blue pin

if (V2>=2.0 && V2<3.0){
digitalWrite(bpin,HIGH);
  }
if (V2<2.0 || V2>3.0){
  digitalWrite(bpin,LOW);
}

//red pin

if ( V2>=3.0){
digitalWrite(redpin,HIGH);
  }
if (V2<3.0){
  digitalWrite(redpin,LOW);
}
delay(100);
}
