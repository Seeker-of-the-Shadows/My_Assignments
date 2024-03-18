/*Write a function to implement four function calculator. The return value indicates the error (due
to zero denominator in case of division). The result is returned via out-parameter.*/
#include <stdio.h>
int calculator(double x, double y, char op, double *result) {
    switch(op) {
        case '+':
            *result = x + y;
            return 0;
        case '-':
            *result = x - y;
            return 0;
        case '*':
            *result = x * y;
            return 0;
        case '/':
            if(y == 0)
                return 1;
            *result = x / y;
            return 0;
        default:
            return 2;   
    }
    return 0;

}
int main() {
    char op;
    int a,b;
    double result;
    printf("Enter   number 1\t");
    scanf("%d",&a);
    printf("Enter   number 2\t");
    scanf("%d",&b); 
    printf("Enter operator either + or - or * or /\t");
    scanf(" %c",&op);   
    
    int flag = calculator(a,b,op,&result);
    if(flag == 0)
        printf("Result = %lf",result);
    else if(flag == 1)
        printf("Error: Division by zero\n");  
    else
        printf("Error: Invalid operator");

            
    return 0;       

}

