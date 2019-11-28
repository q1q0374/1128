#include<stdio.h>

int main()
{
	int i,score[5];
	
	score[0]=10;
	score[1]=20;
	score[2]=30;
	score[3]=40;
	score[4]=50;
	
	for(i=0;i<=4;i++)
	   printf("score%d=%d",i,score[i]);
}
