/*

  e-Gizmo 16 Channel Servo Driver
 
   Sample codes function for
   16 Channel Servo driver.
 
   Codes by:
   e-Gizmo Mechatronix Central
   http://www.e-gizmo.com
 

 */

int x;

void setup(){
  
Serial.begin(9600);
}
void loop (){
//for(x=0;x>=100;x++){
   Serial.write(0x02);
   Serial.print("0,500,50");
   Serial.write(0x03);
   Serial.write(0x02);
   Serial.print("1,500,50");
  Serial.write(0x03);
   Serial.write(0x02);
   Serial.print("2,500,50");
   Serial.write(0x03);
   Serial.write(0x02);
   Serial.print("3,500,50");
  Serial.write(0x03);
    Serial.write(0x02);
   Serial.print("4,500,50");
   Serial.write(0x03);
   Serial.write(0x02);
   Serial.print("5,500,50");
  Serial.write(0x03);
   Serial.write(0x02);
   Serial.print("6,500,50");
   Serial.write(0x03);
   Serial.write(0x02);
   Serial.print("7,500,50");
  Serial.write(0x03);
    Serial.write(0x02);
   Serial.print("8,500,50");
   Serial.write(0x03);
   Serial.write(0x02);
   Serial.print("9,500,50");
  Serial.write(0x03);
   Serial.write(0x02);
   Serial.print("10,500,50");
   Serial.write(0x03);
   Serial.write(0x02);
   Serial.print("11,500,50");
  Serial.write(0x03);
    Serial.write(0x02);
   Serial.print("12,500,50");
   Serial.write(0x03);
   Serial.write(0x02);
   Serial.print("13,500,50");
  Serial.write(0x03);
   Serial.write(0x02);
   Serial.print("14,500,50");
   Serial.write(0x03);
   Serial.write(0x02);
   Serial.print("15,500,50");
  Serial.write(0x03);
  
  
  delay(1000);
  
   Serial.write(0x02);
   Serial.print("0,2200,50");
  Serial.write(0x03);
   Serial.write(0x02);
   Serial.print("1,2200,50");
   Serial.write(0x03);
   Serial.write(0x02);
   Serial.print("2,2200,50");
  Serial.write(0x03);
    Serial.write(0x02);
   Serial.print("3,2200,50");
  Serial.write(0x03);
   Serial.write(0x02);
   Serial.print("4,2200,50");
   Serial.write(0x03);
   Serial.write(0x02);
   Serial.print("5,2200,50");
  Serial.write(0x03);
    Serial.write(0x02);
   Serial.print("6,2200,50");
  Serial.write(0x03);
   Serial.write(0x02);
   Serial.print("7,2200,50");
   Serial.write(0x03);
   Serial.write(0x02);
   Serial.print("8,2200,50");
  Serial.write(0x03);
    Serial.write(0x02);
   Serial.print("9,2200,50");
  Serial.write(0x03);
   Serial.write(0x02);
   Serial.print("10,2200,50");
   Serial.write(0x03);
   Serial.write(0x02);
   Serial.print("11,2200,50");
  Serial.write(0x03);
   Serial.write(0x02);
   Serial.print("12,2200,50");
   Serial.write(0x03);
   Serial.write(0x02);
   Serial.print("13,2200,50");
  Serial.write(0x03);
    Serial.write(0x02);
   Serial.print("14,2200,50");
  Serial.write(0x03);
   Serial.write(0x02);
   Serial.print("15,2200,50");
   Serial.write(0x03);
  
   delay(1000);
   
}   
