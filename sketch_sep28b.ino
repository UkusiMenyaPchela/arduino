
void setup ()
{
  pinMode (D0, OUTPUT) ;
  pinMode (D1, OUTPUT); 
  pinMode (D2, OUTPUT); 
}
void loop ()
{
  digitalWrite (D0, HIGH);
  delay (1000) ;
  digitalWrite (D0, LOW);
  digitalWrite (D1, HIGH);
  delay (1000);
  digitalWrite (D1, LOW);
  digitalWrite (D2, HIGH);
  delay (1000);
  digitalWrite (D2, LOW);
}