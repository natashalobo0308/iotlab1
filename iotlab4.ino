int value=0;
void setup()
{
  
  pinMode(A1,INPUT);
  pinMode(5,OUTPUT);
  pinMode(7,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  value=analogRead(A1);
  Serial.println(value);
  if(value<200){
    digitalWrite(5,LOW);
    digitalWrite(7,LOW);
  }
  else if(value>200 && value<400){
    digitalWrite(5,HIGH);
    digitalWrite(7,LOW);
  }
  else if(value>400){
    digitalWrite(5,HIGH);
    digitalWrite(7,HIGH);
  }
}
