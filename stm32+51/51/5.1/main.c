#include <REGX52.H>
#include "Delay.h"
#include "Nixie.h"


void main()
{
	while(1)
	{	Delay(100);
		Nixie(1,5);
		Delay(100);
		Nixie(2,2);
		Delay(100);
		Nixie(3,0);
		Delay(100);
		Nixie(4,1);
		Delay(100);
		Nixie(5,3);
		Delay(100);
		Nixie(6,1);
		Delay(100);
		Nixie(7,4);



	}
}