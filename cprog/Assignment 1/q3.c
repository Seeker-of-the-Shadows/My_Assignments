/*


Print the ASCII value of user entered character in decimal, hex, octal format and also print the
character for user entered ASCII value.
*/





#include<stdio.h>
int main() 
{
char a;
printf("give me a character \t");
scanf("%c",&a);
printf("octal  format -> %o \n",a);
printf("hexadecimal format -> %x \n",a);
printf("decimal format -> %d \n",a);
int b;
printf("enter a ASCII value \t");
scanf("%d",&b);
printf("the character of user entered ASCII value is \t%c\n",b);

return 0;
}
