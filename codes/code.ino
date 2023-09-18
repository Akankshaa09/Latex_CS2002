#include<Arduino.h>
//Declaring all variables as integers
int D,C,B,A;
int X,Y,Z;
//Code released under GNU GPL.  Free to use for anything.
// the setup function runs once when you press reset or power the board
void setup()
{

    pinMode(2, OUTPUT);
    pinMode(3, INPUT);
    pinMode(4, INPUT);
    pinMode(5, INPUT);
}

// the loop function runs over and over again forever
void loop()
{
  X=digitalRead(3);
  Y=digitalRead(4);
  Z=digitalRead(5);
  A=(Y&&Z)||(!X&&!Y);

digitalWrite (2,A);
}
