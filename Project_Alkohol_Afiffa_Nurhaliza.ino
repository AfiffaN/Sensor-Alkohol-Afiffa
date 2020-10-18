#include <LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
int SENSOR_GAS=3;
int RED_LED=4;
int GREEN_LED=5;

void setup() {
  // put your setup code here, to run once:
pinMode(SENSOR_GAS, INPUT_PULLUP);
pinMode(RED_LED, OUTPUT);
pinMode(GREEN_LED, OUTPUT);
lcd.begin(20,4);
lcd.setCursor(0,0);
lcd.print("SISTEM PENDETEKSI");
lcd.setCursor(0,1);
lcd.print("ALKOHOL");
lcd.setCursor(0,2);
lcd.print("TELEKOMUNIKASI PNJ");
delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
int(SENSOR_GAS_READ) = digitalRead (SENSOR_GAS);
if (SENSOR_GAS_READ == LOW)
{
  lcd.clear();
  lcd.setCursor(0, 3);
  lcd.print("ALKOHOL DETECTED");
  digitalWrite(RED_LED, HIGH);
  digitalWrite(GREEN_LED, LOW);
  delay(20);
}
else
{
  lcd.clear();
  lcd.setCursor(0, 3);
  lcd.print("ALKOHOL NOT DETECTED");
  digitalWrite(GREEN_LED, HIGH);
  digitalWrite(RED_LED, LOW);
  delay(20);
  }
}
