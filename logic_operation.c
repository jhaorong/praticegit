#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,result;
	int flag = 0;
	scanf("%d %d %d",&a,&b,&result);
	if(a != 0)
		a = 1;
	if(b != 0)
		b = 1;
	if((a && b) == result)
	{
		printf("AND\n");
		flag = 1;
	}
	if((a || b) == result)
	{
		printf("OR\n");
		flag = 1;
	} 
	if((a != b) == result)
	{
		printf("XOR\n");
		flag = 1;
	}
	if(flag == 0)
	{
		printf("IMPOSSIBLE\n");
	}
	return 0;
}
