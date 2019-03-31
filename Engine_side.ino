#define a 6
int b;
void setup()
{ 
  Serial.begin(9600);
  pinMode(a,OUTPUT);
}
void loop()
{
  if(Serial.available())
  {
  b=Serial.read();
  if(b==1)
  { 
    Serial.print(b);
    Serial.print("You are drunk");
    digitalWrite(a,LOW);
    delay(1000);
  }
  else if(b==0)
  {
    Serial.print(b);
    Serial.print("Normal");
    digitalWrite(a,HIGH);
    delay(1000);
  } 
  }
  
}

