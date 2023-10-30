#include <LiquidCrystal_I2C.h>

const int lcdAddress = 0x27;

LiquidCrystal_I2C lcd(lcdAddress, 16, 2);

String line1 = "Crazy?";
String line2 = "I was crazy";
String line3 = "once.";
String line4 = "They locked me";
String line5 = "in a room.";
String line6 = "A rubber";
String line7 = "room.";
String line8 = "A rubber room";
String line9 = "with rats.";
String line10 = "And rats make";
String line11 = "me crazy.";

void setup() {
  lcd.init();
  lcd.clear();
  lcd.backlight();
}

void loop() {
  delay(500);
  lcd.setCursor(5, 0);
  lcd.print(line1);
  delay(1250);
  lcd.clear();

  lcd.setCursor(2, 0);
  lcd.print(line2);
  delay(750);
  lcd.setCursor(5, 1);
  lcd.print(line3);
  delay(1250);
  lcd.clear();

  lcd.setCursor(1, 0);
  lcd.print(line4);
  delay(750);
  lcd.setCursor(3, 1);
  lcd.print(line5);
  delay(1250);
  lcd.clear();

  lcd.setCursor(4, 0);
  lcd.print(line6);
  delay(750);
  lcd.setCursor(6, 1);
  lcd.print(line7);
  delay(1250);
  lcd.clear();

  lcd.setCursor(1, 0);
  lcd.print(line8);
  delay(1000);
  lcd.setCursor(3, 1);
  lcd.print(line9);
  delay(1250);
  lcd.clear();

  lcd.setCursor(1, 0);
  lcd.print(line10);
  delay(750);
  lcd.setCursor(4, 1);
  lcd.print(line11);
  delay(1250);

  lcd.clear();
}
