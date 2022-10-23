#include <stdio.h>
#include <stdlib.h>
int main()
{
	int N,i,temp,count=0;
	scanf("%d",&N);
	int arr[N];
	int boolarr[N];
	for(i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
		boolarr[i] = 0;
	} 
	for(i=0;i<N;i++)
	{
		if(boolarr[i] == 0)
		{
			boolarr[i] = 1;
			temp = arr[i];
			while(temp != i)
			{
				boolarr[temp] = 1;
				temp = arr[temp];
			}
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
