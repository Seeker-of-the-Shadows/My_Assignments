#include<stdio.h>
int fact(int x);
int main()
{
	int f, a;
	printf("Enter the number \t");
	scanf("%d",&a);
	f=fact(a);
	
	printf("Factorial of %d is %d\n",a,f);

	return 0;
}

int fact(int x)
{
if(x>=1)
return x*fact(x-1);

else
return 1;
}
