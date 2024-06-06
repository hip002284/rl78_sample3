#include "exc.h"
#include "config.h"
#include "sfr.h"
#include "common.h"
#include <string.h>

UCHAR	gEXC_LastNum = 0;

UCHAR	EXC_Evaluate(UCHAR A_in,UCHAR B_in,UCHAR C_in,UCHAR D_in,UCHAR E_in,UCHAR F_in,UCHAR G_in,UCHAR H_in){
	
	UCHAR ucRet[4]={0b000,0b001,0b010,0b100};
	UCHAR ins[8]={A_in,B_in,C_in,D_in,E_in,F_in,G_in,H_in};
	INT i;
	
	for( i = 0  ; i < 8; i++){
		if(ins[i]==1) {
			gEXC_LastNum=i;
		}
	}
	return ucRet[gEXC_LastNum%4];
}

void EXC_Initialize( void )
{
	gEXC_LastNum=0;
}