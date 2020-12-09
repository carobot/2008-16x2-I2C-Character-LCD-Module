#include <Wire.h> 
#include <LiquidCrystal_I2C.h> // use LiquidCrystal_I2C library, you might need to download this first from the library manager

LiquidCrystal_I2C lcd(0x27,20,4); // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                     // initialize the lcd 
  lcd.backlight();                // turn on lcd backlight
  // print a message, note spot and line counter start from 0
  lcd.setCursor(1,0);             // print text starting from spot 1, line 0
  lcd.print("CANADA ROBOTIX");
}


void loop()
{
  // print anoter message, note spot and line counter start from 0
  lcd.setCursor(1,1);             // print text starting from spot 1, line 1
  lcd.print("HELLO WORLD!");
  delay(1000);
  lcd.setCursor(1,1);             // print text starting from spot 1, line 1
  lcd.print(" THANK YOU! ");     // print space to reset characters
  delay(1000);
}
