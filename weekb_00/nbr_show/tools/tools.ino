long Led_a = 2;
long Led_b = 3;
long Led_c = 4;
long Led_d = 5;
long Led_e = 6;
long Led_f = 7;
long Led_g = 8;
long in_0 = 9;
long in_1 = 10;
long in_2 = 11;
long in_3 = 12;


void aff_in(int block, int stat)
{
    digitalWrite(block, stat);
}

void set_stat(int stat = 1)
{
    int i = 2;
    while(i <= 8)
        digitalWrite(i++, stat);
}


void aff_0()
{
    set_stat(0);
    digitalWrite(Led_g, 1);
}

void aff_1()
{
    set_stat(1);
    digitalWrite(Led_b, 0);
    digitalWrite(Led_c, 0);
}
void aff_2()
{
    set_stat(0);
    digitalWrite(Led_e, 1);
    digitalWrite(Led_b, 1);
}
void aff_3()
{
    set_stat(0);
    digitalWrite(Led_e, 1);
    digitalWrite(Led_f, 1);
}
void aff_4()
{
    set_stat(0);
    digitalWrite(Led_d, 1);
    digitalWrite(Led_f, 1);
    digitalWrite(Led_a, 1);
}
void aff_5()
{
    set_stat(0);
    digitalWrite(Led_c, 1);
    digitalWrite(Led_f, 1);
}
void aff_6()
{
    set_stat(0);
    digitalWrite(Led_c, 1);
}
void aff_7()
{
    set_stat(1);
    digitalWrite(Led_d, 0);
    digitalWrite(Led_c, 0);
    digitalWrite(Led_b, 0);
}
void aff_8()
{
    set_stat(0);
}
void aff_9()
{
    set_stat(0);
    digitalWrite(Led_f, 1);
}
typedef struct s_opp t_opp;
struct s_opp
{
    int nbr;
    void (*aff)(void);
};
t_opp nbr_tab[] =
{
    {0, &aff_0},
    {1, &aff_1},
    {2, &aff_2},
    {3, &aff_3},
    {4, &aff_4},
    {5, &aff_5},
    {6, &aff_6},
    {7, &aff_7},
    {8, &aff_8},
    {9, &aff_9}
};

