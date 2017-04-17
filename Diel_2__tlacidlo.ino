/* Patrik Molnár Diel 2.- Tlačidlo */
int led = 8;
int tlacidlo = 7;

void setup(){
pinMode(led, OUTPUT);
pinMode(tlacidlo, INPUT_PULLUP);
}

void loop(){
if(digitalRead(tlacidlo) == LOW)
{
digitalWrite(led,HIGH);
delay (500);
digitalWrite(led,LOW);
}
