/*Write a program to convert temperature in Celsius to Fahrenheit and vice versa*/

#include<stdio.h>

int main()
{
    float  c,f;
    printf("Enter temperature in celsius\t");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("Temperature is %.2f °F\n",f);
    printf("Enter temperature in fahrenheit");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("Temperature is %.2f °C\n",c);
    return 0;


}