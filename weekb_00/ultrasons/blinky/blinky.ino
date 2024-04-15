#include <LiquidCrystal.h>
int trig = 7;
int echo = 6;
float distance = 0;
LiquidCrystal lcd(12,11,5,4,3,2);

void setup()
{
  lcd.begin(16,2);
    Serial.begin(9600);
	pinMode(trig, OUTPUT);
	pinMode(echo , INPUT);

}

void loop()
{
//Create a impulsion 10us trig
	digitalWrite(trig, LOW);
	delayMicroseconds(2);
	digitalWrite(trig, HIGH);
	delayMicroseconds(10);
	digitalWrite(trig, LOW);
	distance = pulseIn(echo,HIGH)/58.0;

 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("Distance :2Bac:)");
 lcd.setCursor(0,1);
 lcd.print(distance);
 lcd.print(" cm");
	Serial.print("Distance : ");
	Serial.println(distance);
	delay(500);
}
