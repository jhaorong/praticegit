#include <stdio.h>
#include <stdlib.h>
int main()
{
	char month[6][100]={"jan","feb","mar","april","may"};
	int n;
	scanf("%d",&n);
	printf("%s",month[n-1]);
	return 0;	
} 
