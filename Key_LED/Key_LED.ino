int i;

void setup() {
  pinMode(9, INPUT);
  digitalWrite(9, HIGH);

  for (i =2;i<=7;i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
  }
}

void loop() {
  boolean var=digitalRead(9);

  if(!var) {
    for (i =2;i<=7;i++) {
      digitalWrite(i, LOW);
      delay(2000);
    }

    for (i =2;i<=7;i++) {
      digitalWrite(i, HIGH);
      delay(2000);
    }
  }
}