
long    port_a = A0;
float    value;

void setup()
{

    Serial.begin(9600);
}

void loop()
{
    value = analogRead(port_a);
    value  = value * 5.94/1023;
    Serial.print("Hello zak >> :");
    Serial.println(value);

    delay(1);
}
