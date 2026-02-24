#include <stdio.h>

int main() {
    int num, num2;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter number: ");
    scanf("%d", &num2);
    printf("Sum is %d\n", num + num2);
    printf("Sub is %d\n", num - num2);
    printf("Mul is %d\n", num * num2);
    printf("Div is %f\n", (float)num / num2); 
    return 0;
}