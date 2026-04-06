#include <LiquidCrystal.h>

LiquidCrystal lcd (A0,A1,A2,A3,A4,A5);
int i;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Hello World");
}

void loop() {
  if(i>=10) {
    i=0;
    lcd.clear();
    lcd.print("Hello World");
  }
  lcd.setCursor(0,1);
  lcd.print(i);
  delay(1000);
  i++;
}