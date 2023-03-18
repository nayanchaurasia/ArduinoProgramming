/* speed of sound is given =767 mile/hour
  calculate the distance of the obstracle 
  Since speed(mile/hour) = distance(cm) * time(us)
 */
float distance;
int echoPin=11;
int trigPin=12;
int pingTravelTime;
void setup() {
  // put your setup code here, to run once:
pinMode(echoPin,INPUT);
pinMode(trigPin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin,LOW);
delayMicroseconds(10);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
delayMicroseconds(10);
//pulseIn returns the time in microseconds for what time the echo pin is high
pingTravelTime=pulseIn(echoPin,HIGH);
distance=pingTravelTime*(0.034 / 2);
Serial.println(pingTravelTime);
Serial.print(distance );
Serial.println(" cm");
delay(500);

}
