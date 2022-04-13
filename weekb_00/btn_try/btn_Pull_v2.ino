    long stat_red = HIGH;
    long stat_green = HIGH;
    long stat_yelew = HIGH;
    int i;
    int *blin = (int*)malloc(sizeof(int) * 6);
void setup()
{

    i = 0;
    while(i < 6)
    {
        blin[i] = i + 5;
        if(i < 3)
            pinMode(blin[i], OUTPUT);
        if(i >=3)
            pinMode(blin[i], INPUT_PULLUP);
        i++;
    }
    Serial.begin(9600);
}

void loop()
{
    stat_red    = digitalRead(blin[3]);
    stat_green  = digitalRead(blin[4]);
    stat_yelew  = digitalRead(blin[5]);
      digitalWrite(blin[2], stat_yelew);
      digitalWrite(blin[1], stat_red);
      digitalWrite(blin[0], stat_green);
    Serial.println("Hello zak ");
}
