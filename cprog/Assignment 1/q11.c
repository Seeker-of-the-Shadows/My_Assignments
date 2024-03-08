#include<stdio.h>
#include<limits.h>

int main()
{
    printf("Data type             FS   size      range   \n\n");
    printf("char                  %%c   %d     %d to %d \n",sizeof(char),SCHAR_MIN,SCHAR_MAX);
    printf("unsigned char         %%c   %d     %d to %d \n",sizeof(char),CHAR_MIN,CHAR_MAX);
    printf("short int             %%hd  %d     %d to %d \n",sizeof(int),SHRT_MIN,SHRT_MAX);
    printf("unsigned short int    %%hu  %d     %d to %d \n",sizeof(int),0,USHRT_MAX);
    printf("int                   %%d   %d     %d to %d \n",sizeof(int),INT_MIN,INT_MAX);
    printf("unsigned int          %%u   %d     %d to %d \n",sizeof(int),0,UINT_MAX);
    printf("long int              %%ld  %d     %d to %d \n",sizeof(long int),LONG_MIN,LONG_MAX);
    printf("unsigned long int     %%lu  %d     %d to %d \n",sizeof(unsigned long int),0,ULONG_MAX);
   

}
