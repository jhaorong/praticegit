#include <stdio.h>
#include <stdlib.h>
int MAX(int,int);
int main()
{
	int A1,B1,C1;
	int A2,B2,C2;
	int n,Y1,Y2;
	int max = -999999999;
	scanf("%d %d %d",&A1,&B1,&C1);
	scanf("%d %d %d",&A2,&B2,&C2);
	scanf("%d",&n);	
	for(int i=0;i<=n;i++)
	{
		Y1 = A1*pow(i,2) + B1*i + C1;
		Y2 = A2*pow(n-i,2) + B2*(n-i) + C2;
		max = MAX(max,Y1+Y2);
	}
	printf("%d",max);
	return 0;
} 
int MAX(int a,int b)
{
	if(a>=b)
		return a;
	else
		return b;
}
