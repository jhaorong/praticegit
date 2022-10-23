#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,n,i,j,count=0,buya=0,buyb=0;
	scanf("%d %d",&a,&b);
	scanf("%d",&n);
	int arr[n][9999];
	for(i=0;i<n;i++)
	{
		for(j=0;;j++)
		{
			scanf("%d",&arr[i][j]);
			if(arr[i][j] == 0)
			{
				break;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		buya = 0;
		buyb = 0;
		for(j=0;;j++)
		{
			if(arr[i][j] == 0)
			{
				break;
			} 
			if(arr[i][j] == a)
			{
				buya++;
			}
			else if(arr[i][j] == (-1*a))
			{
				buya--;
			}
			else if(arr[i][j] == b)
			{
				buyb++;
			}
			else if(arr[i][j] == (-1*b))
			{
				buyb--;
			}
		}
		if(buya >= 1 && buyb >= 1)
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
