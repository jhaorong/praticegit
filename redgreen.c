//車子 
//紅燈持續多少 60
//綠燈持續多少 120 
//黃燈=>紅  10 
//第一個燈號 => 紅燈 

//人
//紅燈持續多少 120 
//綠燈持續多少 60 
//黃燈=>紅  10 

//行人在綠燈之前10秒不能走路

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int red_interval = 60,green_interval=120,yellow_interval=10;
	int time;
	int print_interval;
	printf("請輸入紅燈持續時間:");
	scanf("%d",&red_interval);
	printf("請輸入綠燈持續時間:");
	scanf("%d",&green_interval);
	printf("請輸入黃燈持續時間:");
	scanf("%d",&yellow_interval);
	printf("請輸入模擬時間長:");
	scanf("%d",&time);
	printf("請輸入多久列印一次:");
	scanf("%d",&print_interval);
	int sum = red_interval + green_interval + yellow_interval;
	//以車的角度來看
	for(int i=0;i<=time;i+=print_interval)
	{
		printf("現在時間 = %d\n",i);
		if(i % sum < red_interval)//紅燈 
		{
			printf("紅燈!!禁止通行\n");
		}
		else if(i % sum >= red_interval && i % sum <= red_interval + yellow_interval)//黃燈
		{
			printf("黃燈!!請減速\n");	
		} 
		else
		{
			printf("綠燈!!可直接通行\n");
		}
	}
	return 0;
} 
