#include "CpuDriver.h"
#include "Mcu.h"
#include "Nvic.h"
int main(void)
{
	
	Nvic_Init();
  Mcu_Init();
	CPU_SWITCH_TO_USERMODE();

	/*Write unprivilege code */
  
	
	CPU_SWITCH_TO_PRIVILGEMODE();
	/* Write Privilege Code */
	CPU_SWITCH_TO_USERMODE();
  
	while(1)
	{
	
	
	
	
	}

   return 0;
}

void SVC_Handler(void)
{

    __asm("MOV R0, #0x0");
    __asm("MSR control, R0");


}