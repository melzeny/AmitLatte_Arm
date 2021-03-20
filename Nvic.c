
#include "Std_Types.h"
#include "Bit_Man.h"
#include "Mcu_Hw.h"
#include "Nvic.h"

extern Nvic_IntType CfgIntEn[];
extern uint8 Nvic_NumOfEnInt;

void Nvic_Init(void)
{
	uint8 i,IntNum,BitOffset;
	uint32 RegOffset;
	/*TODO : Enable all configured Interrupts */
	for(i=0;i<3;i++)
	{
	   IntNum = CfgIntEn[i];
		 RegOffset = IntNum/32;
		 BitOffset = IntNum%32;
		 SET_BIT(REG(NVIC_BASE_REG_EN+(RegOffset*4)), BitOffset);
	
	
	}



}