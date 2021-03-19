
#include "Std_Types.h"
#include "Nvic.h"

extern Nvic_IntType CfgIntEn[];
extern uint8 Nvic_NumOfEnInt;

void Nvic_Init(void)
{
	uint8 i,IntNum;
	/*TODO : Enable all configured Interrupts */
	for(i=0;i<Nvic_NumOfEnInt;i++)
	{
	   IntNum = CfgIntEn[i];
	
	
	}



}