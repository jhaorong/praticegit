#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char arr[1000];
	int len,i,j,k,num;
	while(scanf("%s",arr)!=EOF)
	{
		char maxtemp[1000];
		char mintemp[1000];
		len = strlen(arr);
		//找大數 	
		for(i=0;i<len;i++)
		{
			num = arr[i] - '0';
			if(num % 2 == 0)
			{
				maxtemp[i] = arr[i] + 1;
				for(j=i+1;j<len;j++)
				{
					maxtemp[j] = '1';
				}
				break;
			}
			else
			{
				maxtemp[i] = arr[i];	
			}	
		}
		maxtemp[len] = '\0';
		//找小數
		for(i=0;i<len;i++)
		{
			num = arr[i] - '0';
			if(num % 2 == 0)
			{
				if(num == 0)
				{
					for(j=i-1;j>=0;j--)
					{
						if(arr[j] != '1')
						{
							mintemp[j] = mintemp[j] - 2;
							for(k=j+1;k<len;k++)
							{
								mintemp[k] = '9';
							}
							//mintemp[k] = '\0';
							break;
						}	
					}
					if(j == -1)
					{
						mintemp[0] = '0';
						for(k=1;k<len;k++)
						{
							mintemp[k] = '9';
						}
						//mintemp[k] = '\0';
					}
					break;
				}
				else
				{
					mintemp[i] = arr[i] - 1;
					for(j=i+1;j<len;j++)
					{
						mintemp[j] = '9';
					}
					//mintemp[k] = '\0';
					break;
				}	
			}
			else
			{
				mintemp[i] = arr[i];
			}	
		} 
		mintemp[len] = '\0';
		long long int A,B,N;
		N = atoi(arr);
		A = atoi(maxtemp);//MAX
		B = atoi(mintemp);//MIN
		//printf("A = %d B = %d\n",A,B);
		if((A-N) < (N-B))
		{
			printf("%d\n",A-N);
		}
		else
		{
			printf("%d\n",N-B);
		}	
	}
	return 0;
}
