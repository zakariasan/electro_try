#include "./tools/tools.ino"

void setup()
{
    int i;
    i = 1;
    while(++i <= 12)
    {
        pinMode(i, OUTPUT);
    }
    Serial.begin(9600);
}

void loop()
{

    digitalWrite(in_0, HIGH);
    digitalWrite(in_1, HIGH);
    digitalWrite(in_2, HIGH);
    digitalWrite(in_3, HIGH);
        aff_0();
    delay(1000);
    aff_1();
    delay(1000);
aff_2();
    delay(1000);
aff_3();
    delay(1000);
aff_4();
    delay(1000);
aff_5();
    delay(1000);
aff_6();
    delay(1000);
aff_7();
    delay(1000);
aff_8();
    delay(1000);
aff_9();
    delay(1000);
}

