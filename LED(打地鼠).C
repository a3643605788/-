#include "..\MPC82.H"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{  
  unsigned char  i=0;																					//led[i]
	unsigned int  led[8]={254,253,251,247,239,223,191,127};			//P0's led
	P0M0=0; P0M1=0xFF;
	
	ROW0=0;
	ROW1=0;
	
	while(1)
	{
		i=rand()%8;
		
		for(;;)
		{
			if(i==0 || i==4)
			{
				Delay_ms(10);
				P0=led[i];
				if(COL0==0)
				{
					P0 = 255;
					break;
				}
			}
			else
			{
				break;
			}
		}
		
		
		
		for(;;)
		{
			if(i==1 || i==5)
			{
				Delay_ms(10);
				P0=led[i];
				if(COL1==0)
				{
					P0 = 255;
					break;
				}
			}
			else
			{
				break;
			}
		}
		
		
		
		for(;;)
		{
			if(i==2 || i==6)
			{
				Delay_ms(10);
				P0=led[i];
				if(COL2==0)
				{
					P0 = 255;
					break;
				}
			}
			else
			{
				break;
			}
		}
		
		
		
		for(;;)
		{
			if(i==3 || i==7)
			{
				Delay_ms(10);
				P0=led[i];
				if(COL3==0)
				{
					P0 = 255;
					break;
				}
			}
			else
			{
				break;
			}
		}
		
	}
	return 0;
}