#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int k,i,j,arrlen;
	char arr[1000];
	scanf("%d",&k);
	scanf("%s",arr);
	arrlen = strlen(arr);
	int boolarr[arrlen];
	for(i=0;i<arrlen;i++)
	{
		if(arr[i]>='a'&&arr[i]<='z')//lowercase
		{
			boolarr[i] = 0;	
		} 
		else if(arr[i]>='A'&&arr[i]<='Z')//uppercase
		{
			boolarr[i] = 1;
		}
	}
	
	int currentstatus=boolarr[0],currentnum=0,len=0,max=0;
	for(j=0;j<arrlen;j++)
	{
		currentstatus=boolarr[j],currentnum=0,len=0;
		for(i=j;i<arrlen;i++)
		{
			if(boolarr[i] == currentstatus && currentnum<k)
			{
				currentnum++;
				len++;
			}
			else if(boolarr[i] == currentstatus && currentnum==k)
			{
				if(len > max && len > k)
				{
					max = len;
				}
				currentnum = 1;
				len = 1;
			}
			else if(boolarr[i] != currentstatus && currentnum==k)
			{
				currentstatus = boolarr[i];
				currentnum=1;
				len++;
			}
			else if(boolarr[i] != currentstatus && currentnum!=k)
			{
				if(len > max && len > k)
				{
					max = len;
				}
				currentstatus = boolarr[i];
				currentnum = 1;
				len = 1;
			}	
		}
	}
	printf("%d",max);
	return 0;
}
