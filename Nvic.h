#include "Std_Types.h"

typedef enum
{
    Nvic_GPIO_PORTA = 0,
    Nvic_GPIO_PORTB,
    Nvic_GPIO_PORTC,
    Nvic_GPIO_PORTD,
    Nvic_GPIO_PORTE,
    Nvic_UART0,
    Nvic_UART1,
    Nvic_SSI0,
    Nvic_I2C0,
    Nvic_PWM0_FAULT,
    Nvic_PWM0_GEN0,
    Nvic_PWM0_GEN1,
    Nvic_PWM0_GEN2,
    Nvic_QEI0,
    Nvic_ADC0_SEQ0,
    Nvic_ADC0_SEQ1,
    Nvic_ADC0_SEQ2,
    Nvic_ADC0_SEQ3,
    Nvic_WATCHDOG_TIMERS,
    Nvic_TIMER_0A,
    Nvic_TIMER_0B,
    Nvic_TIMER_1A,
    Nvic_TIMER_1B,
    Nvic_TIMER_2A,
    Nvic_TIMER_2B,
    Nvic_ANALOG_COMPARATOR0,
    Nvic_ANALOG_COMPARATOR1,
    Nvic_SYSTEM_CTRL = 28,
    Nvic_FLASH_MEMORY_CTRL,
    Nvic_GPIO_PORTF,
    Nvic_UART2 = 33,
    Nvic_SSI1,
    Nvic_TIMER_3A,
    Nvic_TIMER_3B,
    Nvic_I2C1,
    Nvic_QEI1,
    Nvic_CAN0,
    Nvic_CAN1,
    Nvic_HIBERNATION_MODULE = 43,
    Nvic_USB,
    Nvic_PWM0_GEN3,
    Nvic_UDMA_SW,
    Nvic_UDMA_ERR,
    Nvic_ADC1_SEQ0,
    Nvic_ADC1_SEQ1,
    Nvic_ADC1_SEQ2,
    Nvic_ADC1_SEQ3,
    Nvic_SSI2 = 57,
    Nvic_SSI3,
    Nvic_UART3,
    Nvic_UART4,
    Nvic_UART5,
    Nvic_UART6,
    Nvic_UART7,
    Nvic_I2C2 = 68,
    Nvic_I2C3,
    Nvic_TIMER_4A,
    Nvic_TIMER_4B,
    Nvic_TIMER_5A = 92,
    Nvic_TIMER_5B,
    Nvic_TIMER_0A_64,
    Nvic_TIMER_0B_64,
    Nvic_TIMER_1A_64,
    Nvic_TIMER_1B_64,
    Nvic_TIMER_2A_64,
    Nvic_TIMER_2B_64,
    Nvic_TIMER_3A_64,
    Nvic_TIMER_3B_64,
    Nvic_TIMER_4A_64,
    Nvic_TIMER_4B_64,
    Nvic_TIMER_5A_64,
    Nvic_TIMER_5B_64,
    Nvic_SYS_EXCP,
    Nvic_PWM1_GEN0 = 134,
    Nvic_PWM1_GEN1,
    Nvic_PWM1_GEN2,
    Nvic_PWM1_GEN3,
    Nvic_PWM1_FAULT,


}Nvic_IntType;

void NVIC_Init(void);