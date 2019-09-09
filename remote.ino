int xpin =A0;
int ypin =A1;
int a,b;

void setup()
{
  Serial.begin(9600);
  pinMode(0,INPUT);
  pinMode(1,INPUT);
}
void loop()
{
  int x=analogRead(xpin);
  int y=analogRead(ypin);
  int c=digitalRead(0);
  int d=digitalRead(1);
  if(((x<=(418))&&(x>=(378)))&&((y<=(420))&&(y>=(380))))  
  {
    Serial.print('s');
  }
  else if(y>420)
  {
    Serial.print('b');
  }
  else if(y<380)
  {
    Serial.print('f');
  }
  else if(x>418)
  {
    Serial.print('l');
  }
  else if(x<378)
  {
    Serial.print('r');
  }
  
}
