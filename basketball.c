#include <stdio.h>
#include <stdlib.h>
int max(int,int);
int main()
{
	int hometeam[2][4];//主隊 [場次][局數] 
	int awayteam[2][4];//客隊 [場次][局數] 
	int homesum[2];//主隊總分 [場次] 
	int awaysum[2];//客隊總分 [場次] 
	for(int i=0;i<2;i++)
	{
		scanf("%d %d %d %d",&hometeam[i][0],&hometeam[i][1],&hometeam[i][2],&hometeam[i][3]);
		scanf("%d %d %d %d",&awayteam[i][0],&awayteam[i][1],&awayteam[i][2],&awayteam[i][3]);
		homesum[i] = hometeam[i][0] + hometeam[i][1] + hometeam[i][2] + hometeam[i][3];
		awaysum[i] = awayteam[i][0] + awayteam[i][1] + awayteam[i][2] + awayteam[i][3];
	}
	for(int i=0;i<2;i++)
	{
		printf("%d:%d\n",homesum[i],awaysum[i]);
	}
	int homewin = 0;
	homewin = max(homesum[0],awaysum[0]) + max(homesum[1],awaysum[1]);
	if(homewin > 1)
	{
		printf("Win\n");
	}
	else if(homewin == 1)
	{
		printf("Tie\n");	
	}
	else
	{
		printf("Lose\n");
	}	
	return 0;	
} 
int max(int a,int b)
{
	if(a > b)
	{
		return 1;	
	}
	else
	{
		return 0;	
	} 
}
