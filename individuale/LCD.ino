#include <LiquidCrystal.h>

LiquidCrystal yourmum(7, 6, 5, 4, 3, 2);

char a='8',b='0',c='6',d='5',e='5',f='3',g='7';

void setup() {
  // put your setup code here, to run once:
yourmum.begin(16,2);
yourmum.clear();
yourmum.write("*******");
delay(700);
yourmum.cursor();
delay(500);
yourmum.setCursor(6,0);
delay(500);
yourmum.write(a);
yourmum.setCursor(5,0);
delay(500);
yourmum.write(b);
yourmum.setCursor(4,0);
delay(500);
yourmum.write(c);
yourmum.setCursor(3,0);
delay(500);
yourmum.write(d);
yourmum.setCursor(2,0);
delay(500);
yourmum.write(e);
yourmum.setCursor(1,0);
delay(500);
yourmum.write(f);
yourmum.setCursor(0,0);
delay(500);
yourmum.write(g);
yourmum.noCursor();
}

void loop() {
  // put your main code here, to run repeatedly:

}
