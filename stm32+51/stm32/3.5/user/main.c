#include "stm32f10x.h"                  // Device header
#include "Delay.H"
#include "butter.h"
#include "LightSensor.h"

uint8_t KeyNum;

int main(void)
{
	Butter_Init();
	LightSensor_Init();
	
	
	while(1)
	{
		if(LightSensor_Get()==1)
		{
			Buzzer_ON();
		}
		else
		{
			Buzzer_OFF();
		}
		
	}
}