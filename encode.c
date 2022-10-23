#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void decode(int*,char*,int);
int main()
{
	int n;//input number 
	int ciphertext[4];//cipher
	char decodearr[1000000];//decode
	while(scanf("%d",&n) != EOF)
	{
		for(int i=0;i<n;i++)
		{
			scanf("%d %d %d %d",&ciphertext[0],&ciphertext[1],&ciphertext[2],&ciphertext[3]);
			decode(ciphertext,decodearr,i);
		}
		*(decodearr + n) = '\0';//string terminate sign
		printf("%s\n",decodearr);
	}
	return 0;
}
void decode(int* ciphertext,char* decodearr,int index)
{
	if(ciphertext[0] == 0)
	{
		if(ciphertext[2] == 0)
		{
			*(decodearr+index) = 'A';
		}
		else
		{
			if(ciphertext[1] == 1)
			{
				*(decodearr+index) = 'B';
			}
			else
			{
				*(decodearr+index) = 'C';
			}
		}
	}
	else
	{
		if(ciphertext[3] == 1)
		{
			*(decodearr+index) = 'D';
		}
		else
		{
			if(ciphertext[1] == 0)
			{
				*(decodearr+index) = 'E';
			}
			else
			{
				*(decodearr+index) = 'F';
			}
		}
	}
}
