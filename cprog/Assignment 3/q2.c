/*
Write a program to print table of given number.
*/
#include<stdio.h>

int main()
{
   unsigned long  int num,i;
    printf("Enter the number: ");
    scanf("%lu",&num);
    for(i=1;i<=10000000;i++)
    {
        printf("%10lu X %10lu = %10lu\n",num,i,num*i);   
    }
    return 0;
    }
