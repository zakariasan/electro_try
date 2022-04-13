#include "Servo.h"

Servo zak;
int servo_in = 0;

void setup()
{
    zak.attach(5);
    zak.write(servo_in);
    Serial.begin(9600);
}

void loop()
{
    servo_in = analogRead(0);
    servo_in = map(servo_in, 1,1022,1,180);
    zak.write(servo_in);
    delay(15);
    Serial.println("Hello zak ");
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

