#include "Std_Types.h"

typedef enum
{
	Port_ChannelDir_Input,
	Port_ChannelDir_Output
}Port_ChannelDirType;


typedef uint8 Port_ChannelModeType;
#define Port_ChannelMode_Dio_X         0U
#define Port_ChannelMode_SSI2Clk_B4    2U
#define Port_ChannelMode_U1RX_B0       1U 
#define Port_ChannelMode_U1RX_C4       2U   
/*TODO : Define all remaining mode options for each Channel Separately */

typedef enum
{
    Port_InternalAttach_Default,
    Port_InternalAttach_PullUpRes,
    Port_InternalAttach_PullDownRes	
}Port_InternalAttachType;

typedef enum
{
	Dio_Channel_A0,
	Dio_Channel_A1,
	Dio_Channel_A2,
	Dio_Channel_A3,
	Dio_Channel_A4,
	Dio_Channel_A5,
	Dio_Channel_A6,
	Dio_Channel_A7,
	
	Dio_Channel_B0,
	Dio_Channel_B1,
	Dio_Channel_B2,
	Dio_Channel_B3,
	Dio_Channel_B4,
	Dio_Channel_B5,
	Dio_Channel_B6,
	Dio_Channel_B7,
	
	Dio_Channel_C0,
	Dio_Channel_C1,
	Dio_Channel_C2,
	Dio_Channel_C3,
	Dio_Channel_C4,
	Dio_Channel_C5,
	Dio_Channel_C6,
	Dio_Channel_C7,
	
	Dio_Channel_D0,
	Dio_Channel_D1,
	Dio_Channel_D2,
	Dio_Channel_D3,
	Dio_Channel_D4,
	Dio_Channel_D5,
	Dio_Channel_D6,
	Dio_Channel_D7,
	
	Dio_Channel_E0,
	Dio_Channel_E1,
	Dio_Channel_E2,
	Dio_Channel_E3,
	Dio_Channel_E4,
	Dio_Channel_E5,

	
	Dio_Channel_F0=40,
	Dio_Channel_F1,
	Dio_Channel_F2,
	Dio_Channel_F3,
	Dio_Channel_F4,
}Dio_ChannelType;

typedef enum
{
	Dio_Port_A,
	Dio_Port_B,
	Dio_Port_C,
	Dio_Port_D,
	Dio_Port_E,
	Dio_Port_F,	
}Dio_PortType;

typedef struct
{
	Dio_ChannelType Channel;
	Port_ChannelDirType Direction;
	Port_ChannelModeType Mode;
	Port_InternalAttachType InternalAttach;
}Port_CfgType;
typedef enum
{
	Dio_ChannelLevel_Low,
	Dio_ChannelLevel_High
}Dio_ChannelLevelType;

extern void Dio_Init(void);
extern void Dio_WriteChannel(Dio_ChannelType ChannelId, Dio_ChannelLevelType ChannelLevel);
extern Dio_ChannelLevelType Dio_ReadChannel(Dio_ChannelType ChannelId);
extern void Dio_FlipChannel(Dio_ChannelType ChannelId);

