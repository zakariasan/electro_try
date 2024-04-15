void setup()
{
    /*pinMode(4, OUTPUT);*/
    /*pinMode(7, OUTPUT);*/
    pinMode(13, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);
    Serial.println("Hello zak ");
}
