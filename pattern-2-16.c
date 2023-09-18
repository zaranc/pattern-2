/*
ABCDE
 BCDE
  CDE
   DE
    E

*/
#include<stdio.h>

int main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=i;k++)
		    printf("  ");
	   
		for(j=i;j<=5;j++)
		{
			printf(" %c",j+64);
		}
		printf("\n");
	}
	
}
