/*
 * Test by ChenMo
 * 接线说明
 * 模块的5V和GND分别接到单片机的5V和GND
 * 模块的VRX和VRY分别接到单片机的A0和A1
*/

#define PIN_X A0    
#define PIN_Y A1     
  
void setup() {    
  pinMode(PIN_X, INPUT);  
  pinMode(PIN_Y, INPUT);  
  Serial.begin(9600);  
}    
  
void loop() {    
  int x,y;    
  
  x=analogRead(PIN_X);    
  y=analogRead(PIN_Y);      
  
  Serial.print("X=");    
  Serial.print(x);     
  Serial.print("\tY=");       
  Serial.print(y);      
  Serial.println();
  
  delay(100);    
}  
