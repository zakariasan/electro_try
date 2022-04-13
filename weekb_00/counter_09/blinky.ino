#include "./tools/tools.ino"
void aff_block(long in)
{

    digitalWrite(in_0, LOW);
    digitalWrite(in_1, LOW);
    digitalWrite(in_2, LOW);
    digitalWrite(in_3, LOW);
    digitalWrite(in, HIGH);
}
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
    unsigned long previousMillis = 0;
int i = 0;
int j = 0;
int k = 0;
int l = 0;
void loop()
{
    unsigned long currentTime = millis();  
    if(currentTime - previousMillis >= 1000)
    {
        previousMillis = currentTime;
        i++;
        if(i == 10)
        {
            i = 0;
            j++;
        }
        if(j == 10)
        {
            j = 0;
            k++;
        }
        if(k == 10)
        {
            k = 0;
            l++;
        }

    }
    aff_block(in_0);
    (nbr_tab + i)->aff();
    delay(1);
aff_block(in_1);
        (nbr_tab + j)->aff();
    delay(1);   
    
aff_block(in_2);
    (nbr_tab + k)->aff();
    delay(1);
    
aff_block(in_3);
    
    (nbr_tab + l)->aff();
    delay(1);
}

