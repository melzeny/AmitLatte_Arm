
#include "Std_Types.h"
#include "Bit_Man.h"
#include "Mcu_Hw.h"
#include "Nvic.h"

extern const Nvic_IntCfgType CfgInt[];
extern const uint8 Nvic_NumOfEnInt;
extern const uint8 Nvic_PreemptiveSys;

void Nvic_Init(void)
{
	uint8 i,IntNum,BitOffset,IntPriority;
	uint32 RegOffset,PriRegAddr;
	/* Configure System to be Preemptive\Non-Preemptive*/
	if(Nvic_PreemptiveSys == FALSE)
  {
		/*Configure the three bit to be all for subgroup*/
	   APINT = 0x05FA0000 | 0x00000700 ;
	}
	for(i=0;i<Nvic_NumOfEnInt;i++)
	{
	   IntNum = CfgInt[i].IntNum;
		 IntPriority = CfgInt[i].Priority;
		
		 /*Enable Interrupt */
		 RegOffset = IntNum/32;
		 BitOffset = IntNum%32;
		 SET_BIT(REG(NVIC_BASE_REG_EN+(RegOffset*4)), BitOffset);
	   
		/*TODO: Set Configured Priority */
		RegOffset = IntNum / 4;
		BitOffset = (8* (IntNum%4) ) +5;
		PriRegAddr = NVIC_BASE_REG_PRI + (RegOffset*4);
    REG(PriRegAddr) |= (IntPriority<<BitOffset);	
		
	
	}



}