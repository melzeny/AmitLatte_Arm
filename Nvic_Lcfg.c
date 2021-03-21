
#include "Std_Types.h"
#include "Nvic.h"

const uint8 Nvic_NumOfEnInt = 3;
const uint8 Nvic_PreemptiveSys = FALSE;

const Nvic_IntCfgType CfgInt[]=
{ /*Interrupt Number         Priority(G/S) */
		{ Nvic_ADC1_SEQ0,        5},
	  { Nvic_UART7,            6},
	  { Nvic_SSI0,             0}

};