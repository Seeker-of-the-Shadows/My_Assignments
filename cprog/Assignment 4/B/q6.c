// Write a function to print a given number in hexadecimal format nusing recursion.
#include <stdio.h>

void printHex(unsigned int n) {
    if (n >= 16) {
        printHex(n/16);
    }
    
    if (n % 16 < 10) {
        printf("%c", n % 16 + '0');
    } else {
        printf("%c", n % 16 - 10 + 'A');        
    }

    }

int main() {
    unsigned int n ;
    printf("Enter a number: ");
    scanf("%u", &n);
    printHex(n);
    printf("\n");
    return 0;           

}
