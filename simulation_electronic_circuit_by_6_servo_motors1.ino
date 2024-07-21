#include <Servo.h>
Servo servo1;
Servo servo2;

Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

void setup()
{
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
  servo5.attach(10);
  servo6.attach(11);
}

void loop()
{
  for(int i = 0; i <= 180; i = i + 10)
  {
    servo1.write(i); delay(50);
    servo2.write(i); delay(50);
    servo3.write(i); delay(50);
    servo4.write(i); delay(50);
    servo5.write(i); delay(50);
    servo6.write(i); delay(50);
    
  }
  
  for(int i = 180; i >= 0; i = i - 10)
  {
    servo1.write(i); delay(50);
    servo2.write(i); delay(50);
    servo3.write(i); delay(50);
    servo4.write(i); delay(50);
    servo5.write(i); delay(50);
    servo6.write(i); delay(50);
  }
  
  /*
  for(int j = 0; j <= 180; j = j + 10)
  {
    servo2.write(j);
    delay(500);
  }
  */
  
  
  /*
  for(int j = 180; j >= 0; j = j - 10)
  {
    servo2.write(j);
    delay(500);
  }
  */
}