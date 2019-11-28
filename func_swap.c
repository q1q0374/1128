#include<stdio.h>
//일반 변수는 주소를 가지고있지만 함수를 전달할떄는 주소까지 전달못하므로 *이것을 통해 주소를
// 전달하여 변경한다
 
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
