#include<stdio.h>
#define STUDENTS 5
int main() 
{
	int score[STUDENTS],i,sum=0;
	float avg;
	
	for(i=0;i<STUDENTS;i++)
	{
		printf("%d���� �л� ���� �Է�:",i+1);
		scanf("%d",&score[i]); 
		sum=sum+score[i];
		
	}
	for(i=0;i<STUDENTS;i++)
	{
		printf("%d�� �л��� ����=%d\n",i+1,score[i]);
	}
	printf("��ü �л��� ������ ��%d\n",sum);
	
	avg=(float)sum/STUDENTS;
	printf("���%.2f",avg);
}
