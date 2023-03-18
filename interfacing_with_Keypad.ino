#include<Keypad.h>
const byte rows=4;
const byte col=4;

char keys[rows][col]={
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'},
};

byte rowPin[rows]={2,3,4,5};
byte colPin[col]={6,7,8,9};

String text="";

Keypad password =Keypad(makeKeymap(keys),rowPin,colPin,rows,col);

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
char value=password.getKey();
if (value != NO_KEY){
  Serial.println(value);
  //Serial.println("HII");
}
}
