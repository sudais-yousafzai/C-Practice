#include<stdio.h>
int main(){
    int num;
    float f_num;
    char character;
    printf("Enter a Integer number:");
    scanf("%d",&num);
    printf("Enter a float number:");
    scanf("%f",&f_num);
    printf("Enter a Character:");
    scanf("%c",&character);
    printf("%d\n",num);
    printf("%f\n",f_num);
    printf("%c\n",character);
    return 0;
}