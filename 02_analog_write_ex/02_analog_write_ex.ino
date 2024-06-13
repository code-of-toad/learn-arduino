int redPin = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = 0;
  int dir = 1;
  while (true) {
    analogWrite(redPin, val);
    delay(3);
    val += dir;
    if (val == 0 || val == 255) dir *= -1;
  }
}
