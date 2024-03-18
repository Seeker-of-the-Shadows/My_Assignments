/*Write a program to accept a character and a number,
 and print the character number times*/

#include <stdio.h>
int main()
{

    int n;
    char c;
    printf("Give a character\t");
    scanf("%c",&c);
    printf("Tell me how many times to repeat the character\t");
    scanf("%d",&n);
    while(n>0)
    {
        printf("%c\t",c);
        n--;


    }
    return 0;
}
