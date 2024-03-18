#include<stdio.h>

int main()
{
int fact=1,a,num;
printf("Give a number\t");
scanf("%d",&num);
a=num;
while(a>1)
{    
	fact=fact*a;
	a--;
}

printf("Factorial of %d is %d ",num,fact);


return 0;
}


