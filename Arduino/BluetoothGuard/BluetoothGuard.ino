//本程序为3406蓝牙门禁系统
#include <Servo.h>
#include <SoftwareSerial.h>

Servo myservo;  
SoftwareSerial Conn(10, 11); 


int pos = 90; //舵机角度
char op;      //蓝牙指令

void setup() 
{
  //初始化串口
  Serial.begin(9600);
  Conn.begin(9600);
  
  //初始化舵机
  myservo.attach(9);
  pos = 90;
  myservo.write(pos);
  delay(1000);
  pos = 120;
  myservo.write(pos);
  delay(3000);
  pos = 90;
  myservo.write(pos);
  delay(3000);
}

void loop() {
  //检测蓝牙数据
 if(Conn.available())
 {
  op = Conn.read();
  Serial.println(op);
  //密码为a
  if(op=='a')
  {
    //舵机旋转30度等待一段时间
    pos = 120;
    myservo.write(pos);
    delay(3000);
    pos = 90;
    myservo.write(pos);
    delay(3000);
  }
 }
}
