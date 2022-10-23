#include <stdio.h>
#include <stdlib.h>
int min(int,int);
int main()
{
	int n,cost = 0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	for(int i=0;i<n;i++)
	{
		if(a[i] == 0)
		{
			if(i==0)
			{
				cost += a[i+1];
			}
			else if(i == n-1)
			{
				cost += a[i-1];
			}
			else
			{
				cost += min(a[i-1],a[i+1]); 
			}
		}	
	}
	printf("%d",cost);
	return 0;	
}
int min(int a,int b)
{
	if(a <= b)
		return a;
	else
		return b;	
} 
