#ifndef MCU_HW_H
#define MCU_HW_H

#include "Std_Types.h"
#define REG(Address)                  (*((volatile uint32*)(Address)))
#define NVIC_BASE_REG_EN              0xE000E100
#define APINT                         (*((volatile uint32*)0xE000ED0C))


#endif