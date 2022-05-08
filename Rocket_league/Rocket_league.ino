#define in1 6
#define in2 7
#define in3 8
#define in4 9
#define enA 10
#define enB 5
float motorSpeed  = 255;
float halfSpeed = 100;

void stopAll();
void forward();
void right();
void left();
void back();
void forwardRight();
void forwardLeft();
void backRight();
void backLeft();

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);



  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);

 

}


void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0)
  {
    
    char command = Serial.read();
    stopAll();
    switch(command)
    {
      case 'F':
         forward();    
         break;
      case 'B':
        back();
        break;
      case 'R':
        right();
        break;
      case 'L':
        left();
        break;
      case 'I':
        forwardRight();
        break;
      case 'H':
        backLeft();
        break;
      case  'J':
        backRight();
        break;
      case 'G':
        forwardLeft();
        break;
//      default:
//        if(command = 'q')
//        {
//          motorSpeed = 255;
//          halfSpeed = 0.5 * motorSpeed;
//        }
//        else
//        {
//          if(command >= 48 && command <= 57)
//          {
//            motorSpeed =  25 * (command - 48);
//            halfSpeed = 0.5 * motorSpeed;
//          }
//        }
       
      
    }
  }
    

  
}
void stopAll() {
  digitalWrite(in1, 0);
  digitalWrite(in2, 0);
  digitalWrite(in3, 0);
  digitalWrite(in4, 0);
}


void right() {
  digitalWrite(in1, 0);
  digitalWrite(in2, 1);
  digitalWrite(in3, 1);
  digitalWrite(in4, 0);

  analogWrite(enA, motorSpeed);
  analogWrite(enB, motorSpeed);
}
void left() {
  digitalWrite(in1, 1);
  digitalWrite(in2, 0);
  digitalWrite(in3, 0);
  digitalWrite(in4, 1);

  analogWrite(enA, motorSpeed);
  analogWrite(enB, motorSpeed);
}
void forward(){
 
  digitalWrite(in1, 0);
  digitalWrite(in2, 1);
  digitalWrite(in3, 0);
  digitalWrite(in4, 1);

  analogWrite(enA, motorSpeed);
  analogWrite(enB, motorSpeed);
}
void back() {
  
  digitalWrite(in1, 1);
  digitalWrite(in2, 0);
  digitalWrite(in3, 1);
  digitalWrite(in4, 0);

  analogWrite(enA, motorSpeed);
  analogWrite(enB, motorSpeed);
}
void forwardRight()
{
  digitalWrite(in1, 0);
  digitalWrite(in2, 1);
  digitalWrite(in3, 1);
  digitalWrite(in4, 0);

  analogWrite(enA, halfSpeed);
  analogWrite(enB, motorSpeed);
}
void forwardLeft()
{
  digitalWrite(in1, 1);
  digitalWrite(in2, 0);
  digitalWrite(in3, 0);
  digitalWrite(in4, 1);

  analogWrite(enA, motorSpeed);
  analogWrite(enB, halfSpeed);
}
void backRight()
{
  digitalWrite(in1, 1);
  digitalWrite(in2, 0);
  digitalWrite(in3, 0);
  digitalWrite(in4, 1);

  analogWrite(enA, halfSpeed);
  analogWrite(enB, motorSpeed);
}
void backLeft()
{
  digitalWrite(in1, 1);
  digitalWrite(in2, 0);
  digitalWrite(in3, 0);
  digitalWrite(in4, 1);

  analogWrite(enA, motorSpeed);
  analogWrite(enB, halfSpeed);
}
