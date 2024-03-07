/*
Write a program to Accept two numbers and
a. find its sum.
b. find its difference.
c. find its product.
Test the program using different integral data type signed/unsigned char/int/long.
First test the result using small values. Then test the same program using large values.
Observe the results.
*/

#include<stdio.h>
int main()
{ 
	int a , b;
	printf("give number a\t\n");
	scanf("%d",&a);
	printf("give number b\t \n");
	scanf("%d",&b);
	int sum =a+b;
	printf("sum is: %d",sum);
	int diff=a-b;
	printf("\ndiff is: %d",diff);
	int prod=a*b;
	printf("\nproduct is %d\n",prod);

	return 0;

}

