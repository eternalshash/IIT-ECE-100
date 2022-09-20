#define speedPinR 9    //  RIGHT PWM pin connect MODEL-X ENA
#define RightMotorDirPin1  12    //Right Motor direction pin 1 to MODEL-X IN1 
#define RightMotorDirPin2  13    //Right Motor direction pin 2 to MODEL-X IN2 // had to change due to a damaged pin
#define speedPinL 6    // Left PWM pin connect MODEL-X ENB
#define LeftMotorDirPin1  7    //Left Motor direction pin 1 to MODEL-X IN3 
#define LeftMotorDirPin2  8   //Left Motor direction pin 1 to MODEL-X IN4 


/*motor control*/
void go_Advance(void)  //Forward
{
  digitalWrite(RightMotorDirPin1, HIGH);
  digitalWrite(RightMotorDirPin2,LOW);
  digitalWrite(LeftMotorDirPin1,HIGH);
  digitalWrite(LeftMotorDirPin2,LOW);
  analogWrite(speedPinL,200);
  analogWrite(speedPinR,200);
}
void go_Left(int t=0)  //Turn left
{
  digitalWrite(RightMotorDirPin1, HIGH);
  digitalWrite(RightMotorDirPin2,LOW);
  digitalWrite(LeftMotorDirPin1,LOW);
  digitalWrite(LeftMotorDirPin2,HIGH);
  analogWrite(speedPinL,200);
  analogWrite(speedPinR,200);
  delay(t);
}
void go_Right(int t=0)  //Turn right
{
  digitalWrite(RightMotorDirPin1, LOW);
  digitalWrite(RightMotorDirPin2,HIGH);
  digitalWrite(LeftMotorDirPin1,HIGH);
  digitalWrite(LeftMotorDirPin2,LOW);
  analogWrite(speedPinL,200);
  analogWrite(speedPinR,200);
  delay(t);
}
void go_Back(int t=0)  //Reverse
{
  digitalWrite(RightMotorDirPin1, LOW);
  digitalWrite(RightMotorDirPin2,HIGH);
  digitalWrite(LeftMotorDirPin1,LOW);
  digitalWrite(LeftMotorDirPin2,HIGH);
  analogWrite(speedPinL,200);
  analogWrite(speedPinR,200);
  delay(t);
}
void stop_Stop()    //Stop
{
  digitalWrite(RightMotorDirPin1, LOW);
  digitalWrite(RightMotorDirPin2,LOW);
  digitalWrite(LeftMotorDirPin1,LOW);
  digitalWrite(LeftMotorDirPin2,LOW);
}
/*set motor speed */
void set_Motorspeed(int speed_L,int speed_R)
{
  analogWrite(speedPinL,speed_L); 
  analogWrite(speedPinR,speed_R);   
}

//Pins initialize
void init_GPIO()
{
  pinMode(RightMotorDirPin1, OUTPUT); 
  pinMode(RightMotorDirPin2, OUTPUT); 
  pinMode(speedPinL, OUTPUT);  
 
  pinMode(LeftMotorDirPin1, OUTPUT);
  pinMode(LeftMotorDirPin2, OUTPUT); 
  pinMode(speedPinR, OUTPUT); 
  stop_Stop();
}

void setup()
{
  init_GPIO();
  /*go_Advance();//Forward
 
  delay(2000);
  
  go_Back();//Reverse
 
  delay(2000);
  
  go_Left();//Turn left
 
  delay(2000);
  
  go_Right();//Turn right
 
  delay(2000);
  
  stop_Stop();//Stop*/

}

void loop()
{
    go_Left(); //slight left
    delay (250);

    go_Right(); //slight right
    delay(250);

    go_Left(); //90 degree left
    delay(500);

    go_Right(); //90 degree right
    delay(500);
    
    go_Advance(); //letter T
    delay(1000);
    
    go_Right();
    delay(500);
    
    go_Advance();
    delay(250);
    
    go_Back();
    delay(500);
    
    go_Advance(); //letter H
    delay(1000);
    
    go_Back();
    delay(500);
    
    go_Right();
    delay(500);
    
    go_Advance();
    delay(500);
    
    go_Left();
    delay(500);
    
    go_Advance();
    delay(500);
    
    go_Back();
    delay(1000);
    
    go_Back(); //Letter W
    delay(500);
    
    go_Right();
    delay(250);
    
    go_Advance();
    delay(500);
    
    go_Left();
    delay(250);
    
    go_Back();
    delay(500);

    go_Right();
    delay(250);

    go_Advance();
    delay(500); 

    go_Advance(); //star shape
    delay(500);

    go_Right();
    delay(750);

    go_Advance();
    delay(500);
    
    go_Right();
    delay(750);

    go_Advance();
    delay(500);

    go_Right();
    delay(750);
    
    go_Advance();
    delay(500);
    
    go_Right();
    delay(750);

    go_Advance();
    delay(500);

    go_Advance(); //rectangle shape
    delay(500);

    go_Right();
    delay(500);

    go_Advance();
    delay(1000);

    go_Right();
    delay(500);

    go_Advance();
    delay(500);

    go_Right();
    delay(500);

    go_Advance();
    delay(1000);

    go_Advance(); //staircase
    delay(500);

    go_Right();
    delay(500);

    go_Advance();
    delay(500);

    go_Left();
    delay(500);

    go_Advance();
    delay(500);

    go_Right();
    delay(500);

    go_Advance();
    delay(500);

    go_Left();
    delay(500);

    go_Advance();
    delay(500);

    go_Right();
    delay(500);

    go_Advance();
    delay(500);

    go_Left();
    delay(500);

    go_Advance();
    delay(500);

    go_Right();
    delay(500);

    go_Advance();
    delay(500);

    go_Left();
    delay(500);

    stop_Stop();
}
