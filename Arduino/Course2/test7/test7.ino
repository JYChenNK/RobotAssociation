/*
 * Test by ChenMo
 * 接线说明
 * 模块的5V和GND分别接到单片机的5V和GND
 * 模块的VRX接到单片机的A0
*/

#define PIN_X A0    
int val;     
  
void setup() {    
  pinMode(PIN_X, INPUT);
  pinMode(9, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}    
  
void loop() {    
  int x;    
  
  x=analogRead(PIN_X);        
  Serial.println(x);
  if(x>512)
  {
    val = map(x-512, 0, 512, 0, 254);
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    analogWrite(9, val); 
    }
    else if(x<512)
  {
    val = map(512-x, 0, 512, 0, 254);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    analogWrite(9, val); 
  }
  
  delay(100);    
}  
