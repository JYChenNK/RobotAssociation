#include <Servo.h>
Servo myservo;

int val,val1;
void setup()
{
  myservo.attach(9);  // 9号引脚输出电机控制信号
  
  Serial.begin(9600);         //仅能使用9、10号引脚
}
void loop()
{
  val = analogRead(A0);

  val = map(val, 0, 1023, 0, 179);     // 利用“map”函数缩放该值，得到伺服电机需要的角度（0到180之间）

  myservo.write(val);     // 设定伺服电机的位置

  delay(15);             // 等待电机旋转到目标角度
}

