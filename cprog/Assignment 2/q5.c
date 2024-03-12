/*
Write a program to find maximum of two numbers using 
conditional operator
*/
#include<stdio.h>

int main()
{

    int n1,n2;
    printf("Enter two numbers: \t");
    scanf("%d%d",&n1,&n2);
    (n1>n2)?printf("%d is max \n",n1):printf("%d is max \n",n2);

    return 0;

}