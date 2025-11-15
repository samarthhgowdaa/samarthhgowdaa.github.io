const int led = 11;
int brightness = 0;
int increment; 	

void setup()
{
  //Not required because of analog funtion;
}

void loop()
{
  if(brightness > 255){
    increment = -1;}
  else if(brightness < 1){
    increment = 1;}
  brightness = brightness + increment;
  
  analogWrite(led, brightness);
  
  delay(10);
}