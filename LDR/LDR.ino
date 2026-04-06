int lightPin = A6;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Light Intensity : ");
  Serial.println(analogRead(lightPin));
  delay(1000);
}