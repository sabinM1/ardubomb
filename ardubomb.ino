#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Keypad.h>

LiquidCrystal_I2C lcd(0x27,16,2);

inline void init();
void write_next(char caracter, short cursor);

short cursor = 6;
const byte ROWS = 4;
const byte COLS = 4;

char hexaKeys[ROWS][COLS] = {
  {'0', 'b', 'c', 'd'},
  {'3', '6', '9', '-'},
  {'2', '5', '8', '-'},
  {'1', '4', '7', '-'}
};

byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {5, 4, 3, 2};

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);

void setup(){
  init();
  lcd.print("*******");
  delay(2000);
}

void loop(){
  char customKey = customKeypad.getKey();
  if(customKey) {
    write_next(customKey, cursor);
    --cursor;
  }
}

inline void init() {
  lcd.init();
  lcd.clear();
  lcd.backlight();
  lcd.setCursor(0, 0);
}

void write_next(char caracter, short cursor) {
  lcd.setCursor(cursor, 0);
  lcd.write(caracter);
}
