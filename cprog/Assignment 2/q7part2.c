/*
Write a program to display number of days in the given year. Check condition for leap year. A
year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap
years.
use Conditional operator
*/

#include<stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d",&year);

    (year%100==0)?(year%400==0?printf("Leap year."):printf("Not a Leap year.")):(year%4==0?printf("Leap year."):printf("Not a Leap year."));

    return 0;   
}       
    