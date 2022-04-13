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
  if(stat_yelew == HIGH)
      digitalWrite(blin[2], HIGH);
  else
      digitalWrite(blin[2], LOW);
  if(stat_red == HIGH)
      digitalWrite(blin[1], HIGH);
  else
      digitalWrite(blin[1], LOW);
  if(stat_green == HIGH)
      digitalWrite(blin[0], HIGH);
  else
      digitalWrite(blin[0], LOW);
    Serial.println("Hello zak ");
}
