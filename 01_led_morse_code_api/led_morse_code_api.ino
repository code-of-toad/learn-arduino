int   redLED = 8;
float pi    = 3.14;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);

};

/**
 * uint8_t pin   == pin number
 * uint8_t count == how many times to blink
 */
void blinkQuickly(uint8_t pin, uint8_t count) {
  for (int i = 0; i < count; i++) {
    digitalWrite(pin, HIGH);
    delay(75);
    digitalWrite(pin, LOW);
    delay(350);
  }
}

/**
 * uint8_t pin   == pin number
 * uint8_t count == how many times to blink
 */
void blinkSlowly(uint8_t pin, uint8_t count) {
  for (int i = 0; i < count; i++) {
    digitalWrite(pin, HIGH);
    delay(250);
    digitalWrite(pin, LOW);
    delay(175);
  }
}

void loop() {
  blinkQuickly(redLED, 3);
  blinkSlowly(redLED, 3);
  blinkQuickly(redLED, 3);
  delay(1000);
}
