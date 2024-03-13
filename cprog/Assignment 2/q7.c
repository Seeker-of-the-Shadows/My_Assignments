/*
Write a program to display number of days in the given year. Check condition for leap year. A
year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap
years.
a. Without using logical operators
b. Using logical operators
c. Conditional operator
*/

#include<stdio.h>

int main()
{
    int year;
    while(1){
    printf("Enter a year ");
    scanf("%d",&year);

    
   
    
    if(year%400==0 )
    {        printf("%d has 366 days and is  a leap year \n",year);
    
                if(year%4==0 && year%100!=0)
                    {        printf("%d has 366 days and is  a leap year \n",year);}


    }

    else if(year%4==0 && year%100!=0)
    printf("%d has 366 days and is a leap year\n",year);

    else{
    printf("%d  has 365 days and is not a leap year\n",year);}
    }
    return 0;

}