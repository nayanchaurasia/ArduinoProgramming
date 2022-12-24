int redPin=13;
int greenPin=12;
int yellowPin=11;
int bluePin=10;
int i;
int dt;
String msg="enter the led to glow";
String myColour;
int c;
void setup() {
  // put your setup code here, to run once:
 pinMode(redPin,OUTPUT);
 pinMode(greenPin,OUTPUT);
 pinMode(yellowPin,OUTPUT);
 pinMode(bluePin,OUTPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while(Serial.available()==0)
{
  
}
myColour=Serial.readString();
//reading the no of blink
Serial.println("enter the no. of blinks");
while(Serial.available()==0)
{
  
}
c=Serial.parseInt();


//reading the delay
Serial.println("enter the delay");
while(Serial.available()==0)
{
  
}
dt=Serial.parseInt();
Serial.println(myColour);
Serial.println(c);

for (i=1;i<=c;i++)
{
if (myColour=="red"){
  digitalWrite(redPin,HIGH);
  delay(dt);
  digitalWrite(redPin,LOW);
  delay(dt);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
  digitalWrite(yellowPin,LOW);
}


if (myColour=="green"){
  digitalWrite(greenPin,HIGH);
  delay(dt);
  digitalWrite(greenPin,LOW);
  delay(dt);
  digitalWrite(redPin,LOW);
  digitalWrite(bluePin,LOW);
  digitalWrite(yellowPin,LOW);
}


if (myColour=="blue"){
  digitalWrite(bluePin,HIGH);
  delay(dt);
  digitalWrite(bluePin,LOW);
  delay(dt);
  digitalWrite(greenPin,LOW);
  digitalWrite(redPin,LOW);
  digitalWrite(yellowPin,LOW);
}

if (myColour=="yellow"){
  digitalWrite(yellowPin,HIGH);
  delay(dt);
  digitalWrite(yellowPin,LOW);
  delay(dt);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
  digitalWrite(redPin,LOW);
}
}
}
