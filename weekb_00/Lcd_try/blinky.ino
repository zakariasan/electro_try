#include <LiquidCrystal.h>

LiquidCrystal show(12,11,5,4,3,2);

void setup()
{
    show.begin(16,2);
    show.setCursor(16, 0);
    show.print("zak hack the LCd try");
    show.setCursor(16,1);
    show.print("this is cool bro");
}

void loop()
{
    show.scrollDisplayLeft();
    delay(500);
}


/*show. noDisplay();*/
    /*delay(200);*/
/*show.display();*/
/*delay(500);*/

