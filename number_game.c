#include <stdio.h>
#include <stdlib.h>
int max(int,int);
int min(int,int);
int main()
{
	int A[3];
	for(int i=0;i<3;i++)
	{
		scanf("%d",A+i);	
	}	
	int left,mid,right;
	left = max(max(A[0],A[1]),A[2]);
	right = min(min(A[0],A[1]),A[2]);
	mid = A[0]+A[1]+A[2]-left-right;
	if(left == right)//三數相同 
	{
		printf("3 %d",left);
	}
	else if(left == mid || mid == right)
	{
		printf("2 %d %d",left,right);
	}
	else
	{
		printf("1 %d %d %d",left,mid,right);
	}
	return 0;
}
int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;	
} 
int min(int a,int b)
{
	if(a<b)
		return a;
	else
		return b;	
} 
