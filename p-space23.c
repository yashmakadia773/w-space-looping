#include<stdio.h>

main()
{
	int j,i,k;
	
	for(i=1;i<=5;i++)
	{
		for(k=i;k<=4;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				printf("-");
			}	
			else
			{
				printf("|");
			}
		}
		printf("\n");
	}
}
