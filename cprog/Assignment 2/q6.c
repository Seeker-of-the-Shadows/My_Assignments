/*Write a program to accept a 5 digit number and check whether it is a numeric palindrome. (If
reversed number is same as entered number it is called palindrome).
*/

#include<stdio.h>

int main()
{
    int rev,num;
    printf("Enter a 5 digit number: \t");
    scanf("%d",&num);
    
        int n1,n2,n3,n4,n5;
        n1=num%10;
        n2=(num/10)%10;
        n3=(num/100)%10;    
        n4=(num/1000)%10;
        n5=(num/10000)%10;
    if(n1==n5 && n2==n4)
        printf("The given number is palindrome\n");


    else printf("The number is not palindrome\n");
    return 0;
    
}