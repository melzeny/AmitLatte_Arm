#include "Dio.h"

const uint8 Port_NumOfActivatedChannels = 4;
const Port_CfgType Port_CfgArr[]=
{/* Channel           Direction               Mode                         InternalAttach*/
	{Dio_Channel_E3,  Port_ChannelDir_Input,  Port_ChannelMode_Dio_X,      Port_InternalAttach_PullUpRes },
	{Dio_Channel_B4,  Port_ChannelDir_Output, Port_ChannelMode_SSI2Clk_B4, Port_InternalAttach_Default   },
	{Dio_Channel_B0,  Port_ChannelDir_Input,  Port_ChannelMode_U1RX_B0,    Port_InternalAttach_Default   },
	{Dio_Channel_C4,  Port_ChannelDir_Input,  Port_ChannelMode_U1RX_C4,    Port_InternalAttach_Default   }
};