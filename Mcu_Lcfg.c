#include "Std_Types.h"

#define MCU_CLOCK_WDT_0      00U
#define MCU_CLOCK_WDT_1      01U

#define MCU_CLOCK_GPT_0      10U
#define MCU_CLOCK_GPT_1      11U
#define MCU_CLOCK_GPT_2      12U
#define MCU_CLOCK_GPT_3      13U
#define MCU_CLOCK_GPT_4      14U
#define MCU_CLOCK_GPT_5      15U

#define MCU_CLOCK_GPIO_A     20U
#define MCU_CLOCK_GPIO_B     21U
#define MCU_CLOCK_GPIO_C     22U
#define MCU_CLOCK_GPIO_D     23U
#define MCU_CLOCK_GPIO_E     24U
#define MCU_CLOCK_GPIO_F     25U

#define MCU_CLOCK_DMA        30U

const uint8 Mcu_NumOfActivatedPer = 4;
const uint16 Mcu_PerClockEn[]=
{
    MCU_CLOCK_WDT_1,
	  MCU_CLOCK_GPT_5,
    MCU_CLOCK_GPIO_C,
	MCU_CLOCK_GPIO_F
	

};