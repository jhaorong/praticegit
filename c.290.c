#include <stdio.h>
#include <stdlib.h>
int main()
{
	char X[1000];
	scanf("%s",X);
	int i,A=0,B=0;
	for(i=0;i<strlen(X);i++)
	{
		if((i+1) % 2 == 1)//odd
		{
			//printf("odd %c\n",X[i]);
			A += X[i] - '0';
		}
		else//even
		{
			//printf("even %c\n",X[i]);
			B += X[i] - '0';
		}
	}
	printf("%d\n",abs(A-B));
	return 0;
} 
