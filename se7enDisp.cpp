/*
	se7enDisp.cpp - Library for Seven Segment Displays.
	created by Ahmet Atasoglu @ 2018
	released into the public domain. 
*/

#include "Arduino.h"
#include "se7enDisp.h"

se7enDisp::se7enDisp(int p1, int p2, int p3, int p4, int p5, int p6, int p7) 
{
	pinMode(p1, OUTPUT);
	pinMode(p2, OUTPUT);
	pinMode(p3, OUTPUT);
	pinMode(p4, OUTPUT);
	pinMode(p5, OUTPUT);
	pinMode(p6, OUTPUT);
	pinMode(p7, OUTPUT);
	_pin1 = p1;
	_pin2 = p2;
	_pin3 = p3;
	_pin4 = p4;
	_pin5 = p5;
	_pin6 = p6;
	_pin7 = p7;
}

void se7enDisp::setAnode()
{
	x = 0x0;
	y = 0x1;
} 

void se7enDisp::setCathode() 
{
	x = 0x1;
	y = 0x0;	
}

void se7enDisp::zero() 
{
	digitalWrite(_pin1, x);
	digitalWrite(_pin2, x);
	digitalWrite(_pin3, x);
	digitalWrite(_pin4, x);
	digitalWrite(_pin5, x);
	digitalWrite(_pin6, x);
	digitalWrite(_pin7, y);		
}

void se7enDisp::one() 
{
	digitalWrite(_pin1, x);
	digitalWrite(_pin2, y);
	digitalWrite(_pin3, y);
	digitalWrite(_pin4, x);
	digitalWrite(_pin5, y);
	digitalWrite(_pin6, y);
	digitalWrite(_pin7, y);		
}

void se7enDisp::two() 
{
	digitalWrite(_pin1, y);
	digitalWrite(_pin2, x);
	digitalWrite(_pin3, x);
	digitalWrite(_pin4, x);
	digitalWrite(_pin5, x);
	digitalWrite(_pin6, y);
	digitalWrite(_pin7, x);
}

void se7enDisp::three() 
{
	digitalWrite(_pin1, x);
	digitalWrite(_pin2, x);
	digitalWrite(_pin3, y);
	digitalWrite(_pin4, x);
	digitalWrite(_pin5, x);
	digitalWrite(_pin6, y);
	digitalWrite(_pin7, x);
}

void se7enDisp::four() 
{
	digitalWrite(_pin1, x);
	digitalWrite(_pin2, y);
	digitalWrite(_pin3, y);
	digitalWrite(_pin4, x);
	digitalWrite(_pin5, y);
	digitalWrite(_pin6, x);
	digitalWrite(_pin7, x);
}

void se7enDisp::five() 
{
	digitalWrite(_pin1, x);
	digitalWrite(_pin2, x);
	digitalWrite(_pin3, y);
	digitalWrite(_pin4, y);
	digitalWrite(_pin5, x);
	digitalWrite(_pin6, x);
	digitalWrite(_pin7, x);
}

void se7enDisp::six() 
{
	digitalWrite(_pin1, x);
	digitalWrite(_pin2, x);
	digitalWrite(_pin3, x);
	digitalWrite(_pin4, y);
	digitalWrite(_pin5, x);
	digitalWrite(_pin6, x);
	digitalWrite(_pin7, x);
}

void se7enDisp::seven() 
{
	digitalWrite(_pin1, x);
	digitalWrite(_pin2, y);
	digitalWrite(_pin3, y);
	digitalWrite(_pin4, x);
	digitalWrite(_pin5, x);
	digitalWrite(_pin6, y);
	digitalWrite(_pin7, y);
}

void se7enDisp::eight() 
{
	digitalWrite(_pin1, x);
	digitalWrite(_pin2, x);
	digitalWrite(_pin3, x);
	digitalWrite(_pin4, x);
	digitalWrite(_pin5, x);
	digitalWrite(_pin6, x);
	digitalWrite(_pin7, x);
}

void se7enDisp::nine() 
{
	digitalWrite(_pin1, x);
	digitalWrite(_pin2, x);
	digitalWrite(_pin3, y);
	digitalWrite(_pin4, x);
	digitalWrite(_pin5, x);
	digitalWrite(_pin6, x);
	digitalWrite(_pin7, x);
}

void se7enDisp::shotdown() 
{
	digitalWrite(_pin1, y);
	digitalWrite(_pin2, y);
	digitalWrite(_pin3, y);
	digitalWrite(_pin4, y);
	digitalWrite(_pin5, y);
	digitalWrite(_pin6, y);
	digitalWrite(_pin7, y);	
}

void se7enDisp::timer(int start, int delayTime)
{
	if (start>=0 && start<=9) 
	{
		for (int i=start;i>=0;i--) 
		{
			switch (i) 
			{
				case 0:
					this->zero();
					break;
				case 1:
					this->one();
					break;
				case 2:
					this->two();
					break;
				case 3:
					this->three();
					break;
				case 4:
					this->four();
					break;
				case 5:
					this->five();
					break;
				case 6:
					this->six();
					break;
				case 7:
					this->seven();
					break;
				case 8:
					this->eight();
					break;
				case 9:
					this->nine();
					break;
				default:
					this->shotdown();
					break;
			}
			delay(delayTime);
		}
	}
	else this->shotdown();	
}

