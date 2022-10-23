#include <stdio.h>
#include <stdlib.h>
int max(int,int);
int min(int,int);
int main()
{
	int n,d,difference,sum=0,count=0;
	scanf("%d %d",&n,&d);
	int price[n][3];
	for(int i=0;i<n;i++)
	{
		scanf("%d %d %d",&price[i][0],&price[i][1],&price[i][2]);
		difference = max(max(price[i][0],price[i][1]),price[i][2]) - min(min(price[i][0],price[i][1]),price[i][2]);
		if(difference >= d)
		{
			count++;
			sum += (price[i][0]+price[i][1]+price[i][2])/3;
		}		
	}
	printf("%d %d",count,sum);
	return 0;		
} 
int max(int a,int b)
{
	if(a >= b)
		return a;
	else
		return b;
}
int min(int a,int b)
{
	if(a <= b)
		return a;
	else
		return b;
}
