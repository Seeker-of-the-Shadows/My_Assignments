#include<stdio.h>

int main()
{
	int num,x, i=1;
	printf("Give a number \t");
	scanf("%d",&num);

	while(i<num)
	{
		if(num%i==0&&x>i)
		{
		x=num/i;
		printf("%d X %d = %d \n",i ,x,num);
		}		
		i++;
	}
}
