/* this code is for the RGB led of common anode i.e. longest leg is acting as th Vcc 5v ..
 *  and rest all have to be ground
 *  which ever to glow ===low ...if high thenn it will be considered as off
*/
int redpin=11;
int bluepin=10;
int greenpin=9;
String msg1="enter the colour amongst pink green blue sky blue white";
String msg="enter the colour";
String mycolour;
void setup() {
  // put your setup code here, to run once:
pinMode(redpin,OUTPUT);
pinMode(greenpin,OUTPUT);
pinMode(bluepin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(redpin,255);
analogWrite(greenpin,0);
analogWrite(bluepin,255);
// GREEN LIGHT WILL BE ON

}
