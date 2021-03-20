
#include "Std_Types.h"
#include "Bit_Man.h"
#include "Mcu_Hw.h"
#include "Nvic.h"

extern Nvic_IntCfgType CfgInt[];
extern uint8 Nvic_NumOfEnInt;
extern uint8 Nvic_PreemptiveSys;

void Nvic_Init(void)
{
	uint8 i,IntNum,BitOffset,IntPriority;
	uint32 RegOffset;
	/* Configure System to be Preemptive\Non-Preemptive*/
	if(Nvic_PreemptiveSys == FALSE)
  {
		/*Configure the three bit to be all for subgroup*/
	   APINT = 0x05FA0000 | 0x00000700 ;
	}
	for(i=0;i<3;i++)
	{
	   IntNum = CfgInt[i].IntNum;
		 IntPriority = CfgInt[i].Priority;
		
		 /*Enable Interrupt */
		 RegOffset = IntNum/32;
		 BitOffset = IntNum%32;
		 SET_BIT(REG(NVIC_BASE_REG_EN+(RegOffset*4)), BitOffset);
	   
		/*TODO: Set Configured Priority */
		
	
	}



}