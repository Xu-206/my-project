#include <REGX52.H>

void Delay1ms(unsigned int xms)		//@12MHz
{
	unsigned char i, j;
	while(xms)
	{
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
		xms--;
	}
	
}


void main()
{
	
	while(1)
		{
			P2=0XFE;
			Delay1ms(500);
			P2=0XFD;
			Delay1ms(500);
			P2=0XFB;
			Delay1ms(500);
			P2=0XF7;
			Delay1ms(500);
			P2=0XEF;
			Delay1ms(500);
			P2=0XBF;
			Delay1ms(500);		
			P2=0X7F;
			Delay1ms(500);			
		}
}