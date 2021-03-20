#include "Std_Types.h"
#define REG(Address)                  (*((volatile uint32*)Address))
#define NVIC_BASE_REG_EN              0xE000E100