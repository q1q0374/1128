#include<stdio.h>
#include<limits.h>
int main()
{
	int number[5],i,min=INT_MAX,max=INT_MIN;
	
	

	for(i=0;i<5;i++)
	{
	    printf("�ټ��� �Է��ϼ���");
	    scanf("%d",&number[i]);
	}
	for(i=0;i<5;i++)
	{
	    printf("number[%d]=%d\n",i,number[i]);
	}
 
    for(i=0;i<5;i++)
    {
    	if(min>number[i])
    	{
    		min=number[i];
		}
		if(max<number[i])
		{
			max=number[i];
		}	
	}
	printf("�迭������ �ּڰ�=%d,�ִ�=%d",min,max);
	
	return 0;
}
