#include <LiquidCrystal.h>

LiquidCrystal show(12,11,5,4,3,2);
int trig = 7;
int echo = 6;
float distance = 1;
void setup()
{    Serial.begin(9600);

    show.begin(16,2);
    show.setCursor(0, 0);
    show.print("Ondes:2Bac-SM-X1 avec zak");
    show.setCursor(0,1);
    show.print("Distance:");

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
  Serial.print("Distance : ");

  show.clear();
      show.setCursor(0, 0);
    show.print("Ondes:2Bac-SM-X1 avec zak");
  show.setCursor(0,1);
    show.print("Distance:");
      show.print(distance);

      show.print("cm");

  Serial.println(distance);
  delay(500);
  
}


/*show. noDisplay();*/
    /*delay(200);*/
/*show.display();*/
/*delay(500);*/
