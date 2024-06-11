#define "RTE_SUM_SWC.h"


void SUM(){
	Std_ReturnType status = E_NOT_OK;
	unsigned short x,y;
	unsigned long z = 0;
	
	status = RTE_Read_RP_SRI_SUM_Val1(&x);
	status = RTE_Read_RP_SRI_SUM_Val2(&y);
	
	z = x+y;
	
	status = RTE_Write_PP_SRI_SUM_SUM_Result(z);
	
}