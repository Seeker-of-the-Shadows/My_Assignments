#include<stdio.h>
int power(int base,int p);
int main()
{	
	int p, b;
	printf("Enter the Base \t");
	scanf("%d",&b);
  	printf("Enter the power \t");
     scanf("%d",&p);

	
	
	printf("value of  %d ^ %d is %d\n",b,p,power(b,p));

	return 0;
}

int power(int base,int p)
{
if(p>=1)
return base*power(base,p-1);

else
return 1;
}
