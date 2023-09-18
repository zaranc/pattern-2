/*
    A
   BA
  CBA
 DCBA
EDCBA
*/
#include<stdio.h>

int main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		for(k=5;k>=i;k--)
		printf("  ");
		
		for(j=i;j>=1;j--)
		{
			printf(" %c",j+64);
		}
		printf("\n");
	}
	
	
	return 0;
}
