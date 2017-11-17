/*
 * Test by ChenMo
 * 接线说明
 * 模块的5V和GND分别接到单片机的5V和GND
 * 模块的SW接到单片机的2引脚
*/

int pin = 13;
volatile int state = LOW;

void blink()//中断函数
{
  state = !state;
}

void setup()
{
  pinMode(pin, OUTPUT);
  pinMode(2,INPUT_PULLUP);
  attachInterrupt(0, blink, CHANGE);//当int.0电平改变时,触发中断函数blink
}
 
void loop()
{
  digitalWrite(pin, state);
}
 

