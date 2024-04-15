#include "Servo.h"

Servo mind;
int servo_in = 0;
int ft_scan();

int trig = 7;
int echo = 6;
float dis = 0;

void setup()
{

    Serial.begin(9600);
	pinMode(trig, OUTPUT);
	pinMode(9, OUTPUT);
	pinMode(echo , INPUT);
	digitalWrite(9, HIGH);
    mind.attach(3);
    mind.write(servo_in);
}

void loop()
{
//Create a impulsion 10us trig
	dis = ft_scan();

	Serial.print("Distance : ");
	Serial.println(dis);
	if(dis < 10){
		mind.write(0);
		delay(100);
	}
	else {
	mind.write(180);
		delay(200);
	}

}
/*if(dis> 50)*/
/*{mind.write(90);*/
		/*delay(1000);*/
		/*mind.write(180);*/
		/*[>ft_scan();<]*/
		/*delay(1000);*/
/*}<]	[>delay(200);*/

int ft_scan(){
	int distance;
	digitalWrite(trig, LOW);
	delayMicroseconds(2);
	digitalWrite(trig, HIGH);
	delayMicroseconds(10);
	digitalWrite(trig, LOW);
	distance = pulseIn(echo,HIGH)/58.0;
	return distance;
}
