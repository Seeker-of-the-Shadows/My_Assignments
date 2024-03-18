#include<stdio.h>

int bin(int x);

int main()
{
int a;
printf("give a number\t");
scanf("%d",&a);
printf("\nBinary of %d is %d\n ",a,bin(a));

return 0;
}

int bin(int x)
{
	if(x==0)
	return 0;

	else 
	return x%2+10*(bin(x/2));

}
