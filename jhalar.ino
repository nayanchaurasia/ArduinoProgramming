int led1=10;
int led2=11;
int led3=12;
int led4=13;
int dt=500;
void setup() {
  // put your setup code here, to run once:
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led1,HIGH);
delay(dt);
digitalWrite(led2,HIGH);
delay(dt);
digitalWrite(led1,LOW);

digitalWrite(led2,LOW);

digitalWrite(led3,HIGH);
delay(dt);

digitalWrite(led4,HIGH);
delay(dt);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
delay(dt);



}
