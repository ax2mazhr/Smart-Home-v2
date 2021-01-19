/*
  Created by Ahmed Amgad
  http://ax2mproductions.com
  http://github.com/ax2mazhr
+++++++++++++++++++
  To be used on arduino pro mini (Atmega328)
*/

void setup() {
  DDRD |= B11111100;    //Set pins 2-7 as OUTPUT
  PORTD &= B00000011;   //Set pins 2-7 to LOW
  DDRB |= B00111111;    //Set pins 8-13 as OUTPUT
  PORTB &= B11000000;   //Set pins 8-13 to LOW
  DDRC &= B11000000;    //Set pins A0-A5 as INPUT
  PORTC &= B11000000;   //Set pins 8-13 to LOW
  Serial.begin(9600);
}

void loop() {
  if(Serial.available())
  {
    
  }

}
