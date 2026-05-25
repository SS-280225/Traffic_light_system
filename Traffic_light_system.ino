void setup()
{
  pinMode(13, OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  for (int i=0;i<5; i++){
  	digitalWrite(9, HIGH);
  	delay(1000); 
  	digitalWrite(9, LOW);
  	delay(1000);
  }
  digitalWrite(5, HIGH);
  delay(10000); 
  digitalWrite(5, LOW);
  digitalWrite(13, HIGH);
  delay(10000); 
  digitalWrite(13, LOW);
}