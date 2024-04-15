#include "Servo.h"

Servo mind;
int servo_in = 0;

void setup()
{
    mind.attach(3);
    mind.write(servo_in);
    Serial.begin(9600);
}

void loop()
{
	/*mind.write(180);*/
	for(servo_in = 0; servo_in <= 180; servo_in++) {
		mind.write(servo_in);
		delay(20);
	}
	for(servo_in = 180; servo_in >= 0; servo_in--) {
		mind.write(servo_in);
		delay(15);
	}
}


/*    while(servo_in < 180)*/
    /*{*/
        /*zak.write(servo_in++);*/
        /*delay(20);*/
    /*}*/
    /*while(servo_in > 0)*/
    /*{*/
        /*zak.write(servo_in--);*/
        /*delay(20);*/
    /*}*/

