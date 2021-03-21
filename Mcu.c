#include "Std_Types.h"
#include "Mcu_Hw.h"
#include "Bit_Man.h"
#include "Mcu.h"

extern const uint16 Mcu_PerClockEn[];
extern const uint8 Mcu_NumOfActivatedPer ;

void Mcu_Init(void)
{
  uint8 i,PeripheralNum,RegOffset,BitOffset;
	uint32 RegAddress;
	for(i=0;i<Mcu_NumOfActivatedPer;i++)
	{
	  PeripheralNum = Mcu_PerClockEn[i];
		RegOffset = PeripheralNum /10;
		BitOffset = PeripheralNum %10;
		RegAddress = (RegOffset*4) + MCU_BASE_REG_RCG;
		SET_BIT(REG(RegAddress) , BitOffset);
	}
}
	