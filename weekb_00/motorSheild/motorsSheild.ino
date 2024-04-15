//------------------------
// Define M1 variables 
//------------------------
int in1M1	= 12;
int in2M1	= 8;
int pM1		= 11;

//------------------------
// Define M2 variables 
//------------------------
int in1M2	= 2;
int in2M2	= 4;
int pM2		= 5;



/*int btn = 2;*/
void runMotor(int motor, int direction, int speed);

void setup()
{
    /*pinMode(4, OUTPUT);*/
    /*pinMode(7, OUTPUT);*/
    /*pinMode(btn, INPUT_PULLUP);*/
//----------------------------------
// OUTPUT the M1
//----------------------------------
 
	pinMode(in1M1, OUTPUT);
    pinMode(in2M1, OUTPUT);
    pinMode(pM1, OUTPUT);

//----------------------------------
// OUTPUT the M2
//---------------------------------- 
	pinMode(in1M2, OUTPUT);
    pinMode(in2M2, OUTPUT);
    pinMode(pM2, OUTPUT);

    Serial.begin(9600);
}

void loop()
{
    runMotor(1,1,100);
    runMotor(2,1,100);
    delay(6000);

    runMotor(1,1,100);
    runMotor(2,-1,100);
    delay(2000);


    runMotor(1, -1,100);
    runMotor(2,1,100);
    delay(2000);

    runMotor(1, -1,100);
    runMotor(2,-1,100);
    delay(5000);
    
    runMotor(1, 0,100);
    runMotor(2, 0,100);
    delay(5000);


}

void runMotor(int motor, int direction, int speed)  {
	int in1, status1, in2, status2, p;
//----------------------------
//   Get Motor
//----------------------------
	if(motor == 1){
        in1 = in1M1;
        in2 = in2M1;
        p   = pM1; 
	}else{
        in1 = in1M2;
        in2 = in2M2;
        p   = pM2;       
    }

    //------------------------
    //status Check 
    //------------------------
    
    if(direction == 1)
    {
        status1 = 1;
        status2 = 0;
    }else if(direction == -1)
    {
        status1 = 0;
        status2 = 1;
    }else{
        status1 = 0;
        status2 = 0;
    }

    //-------------------------
    // Run Motor
    //-------------------------

    speed = map(speed, 0,100, 0, 255);
    analogWrite(p, speed);
    digitalWrite(in1, status1);
    digitalWrite(in2, status2);

    //-------------------------
    //  Display Result
    //-------------------------
    Serial.print("Motor : ");
    Serial.println(motor);
    Serial.print("direction : ");
    Serial.println(direction);
    Serial.print("Speed");
    Serial.println(speed);
    Serial.println("----------------------------------");
}
