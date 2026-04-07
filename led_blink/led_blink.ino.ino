void setup() {
  pinMode(13, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
  digitalWrite(13,HIGH);
  delay (5000);
  digitalWrite(13,LOW);
  delay(5000);

  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
