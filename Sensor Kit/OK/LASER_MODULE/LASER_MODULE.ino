//www.elegoo.com
//2016.06.13

int pos = 0;    
int laser = 16;

void setup() {
  pinMode(laser,OUTPUT);  
}

void loop() {
  for (pos = 0; pos <= 255; pos += 1) 
  { 

    analogWrite(laser,pos);              
    delay(25);                       
  }
  for (pos = 255; pos >= 0; pos -= 1) 
  { 
    analogWrite(laser,pos);             
    delay(25);                      
  }
}
