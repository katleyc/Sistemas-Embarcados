void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
}

void loop() {
  boolean btn2 = digitalRead(2);
  boolean btn3 = digitalRead(3);

  if (!btn2) {
    digitalWrite(13, HIGH);
    delay(5000);
    digitalWrite(13, LOW);
  }

  if (!btn3) {
    digitalWrite(12, HIGH);
    delay(5000);
    digitalWrite(12, LOW);
  }
}
