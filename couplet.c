#include <stdio.h>
#include <stdlib.h>
int testA(int couplet[2][7]);
int testB(int couplet[2][7]);
int testC(int couplet[2][7]);
int main()
{
	int n;
	int couplet[2][7];
	int sum = 0;
	while(scanf("%d",&n) != EOF)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<2;j++)
			{
				for(int k=0;k<7;k++)
				{
					scanf("%d",&couplet[j][k]);	
				}
				//printf("%d %d %d %d %d %d %d\n",couplet[j][0],couplet[j][1],couplet[j][2],couplet[j][3],couplet[j][4],couplet[j][5],couplet[j][6]);		
			}
			sum = testA(couplet) + testB(couplet) + testC(couplet);
			if(sum == 3)
			{
				printf("None\n");
			}
			else
			{
				printf("\n");
			}
			sum = 0;
		}	
	}
	return 0;	
} 
int testA(int couplet[2][7])
{
	for(int i=0;i<2;i++)
	{
		if(couplet[i][1] == couplet[i][3] || couplet[i][1] != couplet[i][5])
		{
			printf("A");
			return 0;
		}	
	}
	return 1;
}
int testB(int couplet[2][7])
{
	if(couplet[0][6] != 1 || couplet[1][6] != 0)
	{
		printf("B");
		return 0;	
	}
	return 1;
}
int testC(int couplet[2][7])
{
	if(couplet[0][1] == couplet[1][1] || couplet[0][3] == couplet[1][3] || couplet[0][5] == couplet[1][5])
	{
		printf("C");
		return 0;
	}
	return 1;
}
