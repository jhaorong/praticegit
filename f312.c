#include <stdio.h>
#include <stdlib.h>
int main()
{
	int R,C,k,m,i,j,l,max=-9999999,min=999999999,temp;
	scanf("%d %d %d %d",&R,&C,&k,&m);
	int arr[R][C];
	int temparr[R][C];
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			scanf("%d",&arr[i][j]);
			temparr[i][j] = arr[i][j];
		}
	}
	for(l=0;l<m;l++)
	{
		for(i=0;i<R;i++)
		{
			for(j=0;j<C;j++)
			{
				if(arr[i][j] != -1)
				{
					temp = arr[i][j]/k; 
					if((i-1) >= 0)//up
					{
						if(arr[i-1][j] != -1)
						{
							temparr[i-1][j] += temp;
							temparr[i][j] -= temp;
						}
					}
					if((i+1) < R)//down
					{
						if(arr[i+1][j] != -1)
						{
							temparr[i+1][j] += temp;
							temparr[i][j] -= temp;
						}
					}
					if((j-1) >= 0)//left
					{
						if(arr[i][j-1] != -1)
						{
							temparr[i][j-1] += temp;
							temparr[i][j] -= temp;
						}
					}
					if((j+1) < C)//right
					{
						if(arr[i][j+1] != -1)
						{
							temparr[i][j+1] += temp;
							temparr[i][j] -= temp;
						}
					}
				}
			}
		}
		for(i=0;i<R;i++)
		{	
			for(j=0;j<C;j++)
			{
				arr[i][j] = temparr[i][j];
			}
		}
	}
	for(i=0;i<R;i++)
	{	
		for(j=0;j<C;j++)
		{
			if(arr[i][j] >= 0)
			{
				if(arr[i][j] < min)
				{
					min = arr[i][j];
				}
				if(arr[i][j]>max)
				{
					max = arr[i][j];
				}
			}
		}
	}
	printf("%d\n",min);
	printf("%d",max);
	return 0;
}
