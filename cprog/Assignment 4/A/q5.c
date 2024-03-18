//Write a function to print a given character for a given number of times.
#include<stdio.h>

void printChar(char ch,int n){
    for(int i=0;i<n;i++){
        printf("%c\n",ch);
    }
}

int main(){
    char ch;
    int n;
    printf("Enter a character: ");
    scanf("%c",&ch);
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("\n");   
    printChar(ch,n);
    return 0;   
}

