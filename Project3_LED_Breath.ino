int time = 5;
void setup()
{
pinMode(3, OUTPUT);
}
void loop()
{
for ( int led = 0 ; led < 256 ; led++ )
{
analogWrite(3, led);
delay(time);
}
for ( int led = 255 ; led >= 0 ; led-- )
{
analogWrite(3, led);
delay(time);
}
delay(200);
}