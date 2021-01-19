/*
  Created by Ahmed Amgad
  http://ax2mproductions.com
  http://github.com/ax2mazhr
+++++++++++++++++++
  To be used on arduino pro mini (Atmega328)
+++++++++++++++++++
  Data Examples:
    [3,5,6][255,255,255][1000] <-- Fade / PWM
    [2,4][0,1] <-- On/Off
    ==================
    3,5,6;255,255,255;1000$
    2,4;0,1;$

*/

int PWM3,PWM5,PWM6,PWM9,PWM10,PWM11 = 0;

void setup() 
{
  DDRD |= B11111100;    //Set pins 2-7 as OUTPUT
  PORTD &= B00000011;   //Set pins 2-7 to LOW
  DDRB |= B00111111;    //Set pins 8-13 as OUTPUT
  PORTB &= B11000000;   //Set pins 8-13 to LOW
  DDRC &= B11000000;    //Set pins A0-A5 as INPUT
  PORTC &= B11000000;   //Set pins 8-13 to LOW
  Serial.begin(9600);
}

void loop() 
{
  if(Serial.available())
  {
    parse(Serial.readStringUntil('$'));
  }
}

void parse(String input)
{
  String[] cmd = strchr(input,';');
}

void fade(int[] pins, int[] values, int duration)
{
  //map function
  //timers
}

void switch(int[] pins, int[] values)
{
  for(int i=0 ; i<sizeof(pins); i++)
  {
    digitalWrite(pins[i],values[i]);
  }
}
