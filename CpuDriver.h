

#define CPU_SWITCH_TO_USERMODE()    __asm("MOV R0, #0x1");\
                                    __asm("MSR control, R0")
																		
#define CPU_SWITCH_TO_PRIVILGEMODE()  __asm("svc #0")

#define CPU_DISABLE_ALL_INTERRUPTS()   __asm("CPSID i")
#define CPU_ENABLE_ALL_INTERRUPTS()    __asm("CPSIE i")