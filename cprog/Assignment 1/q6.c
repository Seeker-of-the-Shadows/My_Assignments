/*Write a program to accept an integer value and print its table. */

#include<stdio.h>

int main()
{
    int i, num;
    printf("give a number\t");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        int prod = num*i;
        printf("%dx%d=%d\n",num,i,prod);

    }
    return 0;

}