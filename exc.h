#include "common.h"

#define	EXC_INIT0														\
{																\
			EXC_Initialize();											\
}                                                                                                                               \
                                                                                                             \

#define EXC_PROC(A_in,B_in,C_in,D_in,E_in,F_in,G_in,H_in,a_out,b_out,c_out)                                                            				\
{																\
	{														        \
			UCHAR	ucSeg;												\
																\
			ucSeg = EXC_Evaluate(A_in,B_in,C_in,D_in,E_in,F_in,G_in,H_in);						\
			a_out = (ucSeg>>2) & 0x01;										\
			b_out = (ucSeg>>1) & 0x01;										\
			c_out = ucSeg & 0x01;											\
	}															\
}																\

UCHAR	EXC_Evaluate(UCHAR A_in,UCHAR B_in,UCHAR C_in,UCHAR D_in,UCHAR E_in,UCHAR F_in,UCHAR G_in,UCHAR H_in);
void	EXC_Initialize( void );

