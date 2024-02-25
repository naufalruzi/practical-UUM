/*
   Arduino LCD I2C Tutorial by 'Tronics Lk"
   Please visit my YouTube channel from this link for more Tutorials
   https://www.youtube.com/channel/UCYJa3gs8q49-N3TLm-7ygUw?sub_confirmation=1
*/
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();         // initialize the lcd
  lcd.backlight();    // Turn on the LCD screen backlight
}

void loop()
{
  lcd.setCursor(1, 0);
  lcd.print("A");
  delay(900);
  lcd.setCursor(2, 0);
  lcd.print("b");
  delay(900);
  lcd.setCursor(3, 0);
  lcd.print("a");
  delay(900);
  lcd.setCursor(4, 0);
  lcd.print("n");
  delay(900);
  lcd.setCursor(5, 0);
  lcd.print("g");
  delay(900);
  lcd.clear();

  lcd.setCursor(2, 0);
  lcd.print("Sangat ");
  lcd.setCursor(9, 0);
  lcd.print("Pro");
  delay(900);
  lcd.clear();
}
