float V2 = 0;
int readVal;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(A1, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(A1);
  V2 = (5./1023.) * readVal;
  Serial.println(V2);
  delay(250);
}
