/* Patrik Molnár Diel 3.- Potenciometer */
int led = 3;
int potenciometer = 0;
int regulacia = 0;

void setup() {
pinMode(led, OUTPUT);
pinMode(potenciometer, INPUT);
}

void loop() {
regulacia = (analogRead(potenciometer)/4);
analogWrite(led, regulacia); 
delay(20); 
}
