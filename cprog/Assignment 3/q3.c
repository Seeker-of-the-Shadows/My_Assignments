#include<stdio.h>
int sum(int a);
int rev(int x);
int main()
{
	int num;
	printf("give a number\t");
	scanf("%d",&num);
	printf("Input : %d \n Output : %d \n Reverse : \t",num, sum(num));
	rev(num);


}


int sum(int a)
{  
int i;
while(a>0)
{
i+=a%10;
a=a/10;

}
return i;

}

int rev(int x)
{
int y=0;
while(x>0)
{
	y=x%10;
	x/=10;
	printf(" %d",y);
}


}
