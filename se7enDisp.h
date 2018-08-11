/*
	se7enDisp.h - Library for Seven Segment Displays(cathode).
	created by Ahmet Atasoglu @ 2018
	released into the public domain. 
*/

#ifndef se7enDisp_H
#define se7enDisp_H
#include <Arduino.h>

class se7enDisp 
{
	public:		
		se7enDisp(int p1, int p2, int p3, int p4, int p5, int p6, int p7);
		void setAnode();
		void setCathode();	
		void zero();
		void one();
		void two();
		void three();
		void four();
		void five();
		void six();
		void seven();
		void eight();
		void nine();
		void timer(int start=9, int delayTime=1000);
		void shotdown();
	private:
		int _pin1, _pin2, _pin3, _pin4, _pin5, _pin6, _pin7;
		int x, y;
};

#endif
