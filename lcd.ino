#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
char result = '0';

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop() {
  if (Serial.available() > 0){
    result = Serial.read();
  }
  switch (result){
    case '0':
      lcd.setCursor(0,0);
      lcd.print("Rot quality");
      lcd.setCursor(0,1);
      lcd.print("strawberry!");
      break;
    case '1':
      lcd.setCursor(0,0);
      lcd.print("Good quality");
      lcd.setCursor(0,1);
      lcd.print("strawberry!");
      break;
    case '2':
      lcd.setCursor(0,0);
      lcd.print("Please Show");
      lcd.setCursor(0,1);
      lcd.print("strawberry!");
      break;
  }
}
