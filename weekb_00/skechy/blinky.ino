void setup()
{
    pinMode(4, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    digitalWrite(4, HIGH);
    delay(1000);
    digitalWrite(7, HIGH);
    delay(1000);
    digitalWrite(8, HIGH);
    delay(1000);

    digitalWrite(4, LOW);
    delay(1000);
    digitalWrite(7, LOW);
    delay(1000);
    digitalWrite(8, LOW);
    delay(1000);
    Serial.println("Hello zak ");
}
