int led = 3;

void setup()
{
  pinMode(led,OUTPUT);
}

void loop()
{
  for (byte i=0; i <= 255; i++){
    analogWrite(led, i);
    delay(20);
  } 
}

