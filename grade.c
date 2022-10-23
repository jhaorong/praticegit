#include <stdio.h>
#include <stdlib.h>
void swap(int*,int,int);
int main()
{
	int n,max=-1,min=101;
	scanf("%d",&n);
	int grade[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",grade+i);
	}
	/*
	for(int i=0;i<n;i++)
	{
		printf("%d ",grade[i]);
	}*/	
	//sorting 
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			if(grade[j-1] > grade[j])
			{
				swap(grade,j-1,j);
			}
		}
	}
	//find max failed grade
	//find min pass grade
	for(int i=0;i<n;i++)
	{
		if(grade[i] < 60)// fail
		{
			if(grade[i] > max)
			{
				max = grade[i];
			}
		}
		else//pass
		{
			if(grade[i] < min)
			{
				min = grade[i];
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",grade[i]);
	}
	printf("\n");
	if(max == -1)
	{
		printf("best case\n");
		printf("%d",min);
	}
	else if(min == 101)
	{
		printf("%d\n",max);
		printf("worst case");
	}
	else
	{
		printf("%d\n",max);
		printf("%d",min);
	}
	return 0;
} 
void swap(int* grade,int x,int y)
{
	int temp;
	temp = grade[x];
	grade[x] = grade[y];
	grade[y] = temp;
}
 
