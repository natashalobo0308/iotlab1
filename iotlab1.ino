// C++ code
//
void setup()
{
  int led[]={2,3,4,5,6};
  for(int i=0;i<5;i++){
  pinMode(led[i], OUTPUT);
  }
  }


void loop()
{
  int led[]={2,3,4,5,6};
  for(int i=0;i<5;i++){
  digitalWrite(led[i], HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(led[i], LOW);
  delay(500); 
  // Wait for 1000 millisecond(s)
  }
 for(int i=5;i>=1;i--){
  digitalWrite(led[i], HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(led[i], LOW);
  delay(500); 
  // Wait for 1000 millisecond(s)
  }
}
