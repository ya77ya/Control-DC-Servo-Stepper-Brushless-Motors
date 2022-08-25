#include <Servo.h>
Servo servo1, servo2, servo3;
int pos1=0, pos2=0, pos3=0;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(9);
  servo2.attach(6);
  servo3.attach(5);

}

void loop() {
  // put your main code here, to run repeatedly:
for (pos1= 0 ; pos1<180; pos1 +=1)
    {
      servo1.write(pos1);
      delay(5);
      }
delay(100);
      for (pos1=180 ; pos1>=1 ; pos1-=1)
      {
      servo1.write(pos1);
      delay(5);
      
      }
  
  for (pos2= 0 ; pos2<180; pos2 +=1)
    {
      servo2.write(pos2);
      delay(5);
      }
delay(100);
      for (pos2=180 ; pos2>=1 ; pos2-=1)
      {
      servo2.write(pos2);
      delay(5);
      
      }
  for (pos3= 0 ; pos3<180; pos3 +=1)
    {
      servo3.write(pos3);
      delay(5);
      }
delay(100);
      for (pos3=180 ; pos3>=1 ; pos3-=1)
      {
      servo3.write(pos3);
      delay(5);
      
      }
  
}
