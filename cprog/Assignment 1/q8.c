/*
Write a program to accept three integer numbers and find its average.
*/
#include<stdio.h>
int main()
{int a,b,c,avg;
    printf("give 3 integers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    avg=(a+b+c)/3;
    printf("Average is %d\n",avg);

    return 0;

}