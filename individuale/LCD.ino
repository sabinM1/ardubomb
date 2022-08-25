#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

char a='8',b='0',c='6',d='5',e='5',f='3',g='7';

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
lcd.clear();
lcd.write("*******");
delay(700);
lcd.cursor();
delay(500);
lcd.setCursor(6,0);
delay(500);
lcd.write(a);
lcd.setCursor(5,0);
delay(500);
lcd.write(b);
lcd.setCursor(4,0);
delay(500);
lcd.write(c);
lcd.setCursor(3,0);
delay(500);
lcd.write(d);
lcd.setCursor(2,0);
delay(500);
lcd.write(e);
lcd.setCursor(1,0);
delay(500);
lcd.write(f);
lcd.setCursor(0,0);
delay(500);
lcd.write(g);
lcd.noCursor();
}

void loop() {
  // put your main code here, to run repeatedly:

}
