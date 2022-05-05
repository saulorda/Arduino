#include <Servo.h>
Servo s;
Servo a;
Servo b;
Servo c;
int botao = 7;
void setup() 
{

  pinMode ( botao, INPUT_PULLUP);

}

void loop() 
{
s.attach (9);
a.attach (10);
b.attach (6);
c.attach (5);
if  (digitalRead (botao) == LOW )
  {
    for (int angulo = 0; angulo <= 180; angulo++ )
    {
     s.write(angulo);
     a.write(angulo);
     b.write(angulo);
     c.write(angulo);
     delay(10); 
    }
    for (int angulo = 180; angulo >= 0; angulo--)
    {
      s.write(angulo);
      a.write(angulo);
      b.write(angulo);
      c.write(angulo);
      delay(10);
    }
    
  }  
s.detach();
a.detach();
b.detach();
c.detach();
}
