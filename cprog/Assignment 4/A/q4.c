/*
Write a function to implement four function calculator. Function would take operands and
operator as arguments and returns result.*/
#include<stdio.h>

int flag= 0;
float calculator(float num1, float num2, char operator){

float result;

switch(operator){
    case '+':
        result = num1 + num2;
        break;

    case '-':
        result = num1 - num2;
        break;

    case '*':
        result = num1 * num2;
        break;

    case '/':
    if(flag==1)
    {
        printf("Error! Division by zero");
    }
    else
        result = num1 / num2;
        break;

    default:
        printf("Error! operator is not correct");
        break;  
    }       
    return result;          

}
int main()
{
    float num1, num2;
    char operator;

    printf("Enter the operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter the two numbers: ");
    scanf("%f %f", &num1, &num2);
   if (num2 == 0 )
       flag = 1;
   
    printf("The result is: %f", calculator(num1, num2, operator));

    return 0;       
}

