#include<stdio.h>
#define stu 5
float get_a(int scr[],int n);
int main()
{
	int score[stu]={100,100,90,50,80};
	float avg;
	avg=get_a(score,stu);
	
	printf("ЦђБе =%f",avg);
}
float get_a(int scr[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum+=scr[i];
	}
	return (float)sum/n;
}

