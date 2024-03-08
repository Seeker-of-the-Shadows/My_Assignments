/*
Write a program to accept a 4 digit number and
a. Display face value of each decimal digit
b. Display place value of each decimal digit
c. Display no in reverse order by changing decimal place values
If user enters a 4 digit number 9361 output should be
a. 9
3
6
1
b. 9361 = 9 000 + 300 + 60 + 9
c. 1639
*/

#include<stdio.h>
#include<math.h>


int main()

{
    int digit,num,i,a,b,c,d;
    printf("Enter a 4 digit number\t");
    scanf("%d",&digit);
    num=digit;

    d=num%10;// d=1
    num=num/10;

    c=num%10;
    num=num/10;

     b=num%10;
    num=num/10;

     a=num;
     printf("%d %d %d %d\n",a,b,c,d);
     printf("%d =%d+%d+%d+%d \n",digit,a*1000,b*100,c*10,d);

    for(i=1;i<=4;i++)//prog to reverse digits
    {
        
        int rev=digit%10;
        printf("%d",rev);
        digit=digit/10;
        
    }

return 0;

}