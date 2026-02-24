#include<stdio.h>
int main(){
    float num1,num2;
    char op;
    printf("Enter first number: ");
    scanf("%f",&num1);
    printf("Enter first number: ");
    scanf("%f",&num2);
    printf("Enter an operator: ");
    scanf("%s",&op);
    switch (op)
    {
    case '+':
        printf("Sum is: %.1f",num1+num2);
        break;
    case '-':
        printf("Sub is: %.1f",num1-num2);
        break;
    case '*':
        printf("Mul is: %.1f",num1*num2);
        break;
    case '/':
        printf("Div is: %.1f",num1/num2);
        break;
    
    default:
        printf("Invalid Operator");
    }
    return 0;    
}