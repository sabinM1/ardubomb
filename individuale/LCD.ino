#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

const char charset[] = {
  '8', '0', '6', '5', '5', '3', '7'
};

inline void init();
void write_next(char caracter, short cursor);

void setup() {
  init();
  lcd.print("*******");
  delay(2000);
  for (short i = 0; i < 7; ++i)
    write_next(charset[i], 6 - i);
}

void loop() {

}

inline void init() {
  lcd.init();
  lcd.clear();
  lcd.backlight();
  lcd.setCursor(0, 0);
}

void write_next(char caracter, short cursor) {
  lcd.setCursor(cursor--, 0);
  lcd.write(caracter);
  delay(500);
}
