//���l 
//���O����h�� 60
//��O����h�� 120 
//���O=>��  10 
//�Ĥ@�ӿO�� => ���O 

//�H
//���O����h�� 120 
//��O����h�� 60 
//���O=>��  10 

//��H�b��O���e10���ਫ��

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int red_interval = 60,green_interval=120,yellow_interval=10;
	int time;
	int print_interval;
	printf("�п�J���O����ɶ�:");
	scanf("%d",&red_interval);
	printf("�п�J��O����ɶ�:");
	scanf("%d",&green_interval);
	printf("�п�J���O����ɶ�:");
	scanf("%d",&yellow_interval);
	printf("�п�J�����ɶ���:");
	scanf("%d",&time);
	printf("�п�J�h�[�C�L�@��:");
	scanf("%d",&print_interval);
	int sum = red_interval + green_interval + yellow_interval;
	//�H�������רӬ�
	for(int i=0;i<=time;i+=print_interval)
	{
		printf("�{�b�ɶ� = %d\n",i);
		if(i % sum < red_interval)//���O 
		{
			printf("���O!!�T��q��\n");
		}
		else if(i % sum >= red_interval && i % sum <= red_interval + yellow_interval)//���O
		{
			printf("���O!!�д�t\n");	
		} 
		else
		{
			printf("��O!!�i�����q��\n");
		}
	}
	return 0;
} 
