#include<stdio.h>
//�Ϲ� ������ �ּҸ� ������������ �Լ��� �����ҋ��� �ּұ��� ���޸��ϹǷ� *�̰��� ���� �ּҸ�
// �����Ͽ� �����Ѵ�
 
void swap(int,int);
void swap2(int *,int *);
int main()
{
	int a=3,b=6;
	printf("a=%d,b=%d\n",a,b);
	swap(a,b);
	printf("a=%d,b=%d\n",a,b);
    swap2(&a,&b);
	printf("a=%d,b=%d\n",a,b);
}
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
void swap2(int *x,int *y)
{
	int temp;
	temp = *x;
	*x=*y;
	*y=temp;
}
