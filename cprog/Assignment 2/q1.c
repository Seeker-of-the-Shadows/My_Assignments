/*Write a program to accept two numbers and display division of the two numbers. Check for
divide by zero error. If divider is zero then display appropriate error message.
*/


#include<stdio.h>

int main()

{

	int num1,num2,out;
	printf("Give 2 numbers\t");
	scanf("%d%d",&num1,&num2);

	if(num2!=0)
	{
		out=num1/num2;
		printf("The division of given numbers is = %d\t",out);

	}

	else printf("Cannot divide by 0\n");
return 0;

}

