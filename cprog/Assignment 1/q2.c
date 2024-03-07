/*
Write a program to accept a number and print the number in character, decimal, octal and hex
formats.
*/

#include<stdio.h>
int main() 
{
int a;
printf("give me a number \t");
scanf("%d",&a);
printf("character format -> %c \n",a);
printf("octal  format -> %o \n",a);
printf("hexadecimal format -> %x \n",a);
printf("decimal format -> %d \n",a);

return 0;
}
