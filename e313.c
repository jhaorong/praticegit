#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int N,i,j;
	scanf("%d",&N);
	int lettercount[N][26];//纗–﹃いぃダ计
	int difcount[N];//纗–﹃钵ダ计 
	char letter[N][1000];//纗﹃
	//﹍て
	for(i=0;i<N;i++)
	{
		difcount[i] = 0;
		for(j=0;j<26;j++)
		{
			lettercount[i][j] = 0;
		}	
	} 
	int temp = 0;
	//块﹃ 
	for(i=0;i<N;i++)
	{
		scanf("%s",&letter[i]);
		for(j=0;j<strlen(letter[i]);j++)
		{
			temp = letter[i][j]-'A';
			if(lettercount[i][temp] == 0)
			{
				difcount[i]++;
			}
			lettercount[i][temp]++;			
		}	
	} 
	//т程钵计ぇ﹃ 
	int min = difcount[0];
	int mincount = 0;
	int mindifindex[N];
	for(i=0;i<N;i++)
	{
		if(difcount[i] < min)
		{
			min = difcount[i];
		}
	}
	for(i=0;i<N;i++)
	{
		if(difcount[i] == min)
		{
			mindifindex[mincount] = i;
			mincount++;
		}
	}
	//盢程钵计﹃穝minletter皚 
	char minletter[mincount][1000];
	for(i=0;i<mincount;i++)
	{
		strcpy(minletter[i],letter[mindifindex[i]]);
		//printf("%s\n",minletter[i]);
	}
	//ㄌㄥ抖逼ダ(selection sort) 
	char temparr[1000];
	for(i=0;i<mincount-1;i++)
	{
		for(j=i+1;j<mincount;j++)
		{
			if(strcmp(minletter[i],minletter[j])>0)
			{
				strcpy(temparr,minletter[i]);
				strcpy(minletter[i],minletter[j]);
				strcpy(minletter[j],temparr);
			}
		}
	}
	printf("%s",minletter[0]);
	
	return 0;
} 
