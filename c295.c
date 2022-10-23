#include <stdio.h>
#include <stdlib.h>
int main()
{
	int N,M;
	scanf("%d %d",&N,&M);
	int a[N][M];
	int maxarr[N];
	int max=0,S=0;
	for(int i=0;i<N;i++)
	{
		max = 0;
		for(int j=0;j<M;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j] > max)
			{
				max = a[i][j];
			}
		}
		maxarr[i] = max;
		S += max;
	}
	printf("%d\n",S);
	int candivide[N],flag=0,index=0;
	for(int i=0;i<N;i++)
	{
		candivide[i] = 0;
		if(S % maxarr[i] == 0)
		{
			index = i;
			candivide[i] = maxarr[i];
		}
	}
	for(int i=0;i<N;i++)
	{
		if(candivide[i] != 0)
		{
			flag = 1;
			if(i == index)
			{
				printf("%d",candivide[i]);
			}
			else
			{
				printf("%d ",candivide[i]);
			}
		}
	}
	if(flag == 0)
	{
		printf("-1");
	}
	return 0;
}
