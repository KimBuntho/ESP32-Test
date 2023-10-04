float x,y;

void setup() {
  // put your setup code here, to run once:
 pinMode(10,OUTPUT);
 pinMode(A0,INPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(10,1);
 x = analogRead(A0);
 y = map(x,0,1023,0,5);
 Serial.println(y);
}
