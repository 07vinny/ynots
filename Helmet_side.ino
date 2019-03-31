const int output=7;
const int analogInPin = A0;  
const int analogOutPin = 9; 
int sensorvalue = 0;       
int outputValue = 0;        
void setup() {
 
  Serial.begin(9600);
  pinMode(output,OUTPUT);
}

void loop() {
  sensorvalue = analogRead(analogInPin);
  outputValue = map(sensorvalue, 0, 1023, 0, 100);
  analogWrite(analogOutPin, outputValue);


  Serial.print("sensor = ");
  if(sensorvalue<200)
  {
      digitalWrite(output,LOW);
      Serial.write(output);
  }
  if (sensorvalue>=200 && sensorvalue<280)
  {
       digitalWrite(output,LOW);
      Serial.write(output);
 
  }
  if (sensorvalue>=280 && sensorvalue<350)
  {
       digitalWrite(output,LOW);
      Serial.write(output);
  
  }
  if (sensorvalue>=350 && sensorvalue <450)
  {
      
       digitalWrite(output,HIGH);
      Serial.write(output);
  
  
