#include"stm32f4xx.h"
int main()
{
RCC->AHB1ENR|=RCC_AHB1ENR_GPIOAEN;
	GPIOA->MODER&=~(3UL<<10);
	GPIOA->MODER|=(1UL<<10);
	while(1)
	{
		GPIOA->ODR^=(1<<5);
		for(int i=0;i<500000;i++);
	}
}