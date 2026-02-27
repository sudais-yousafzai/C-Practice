#include<stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age>=18 && age<=30)
        printf("\nYou are ellegible for this Post\n");
    else
        printf("\nYou are not ellegible for this post\nBecause of your age");
        if(age<18)
            printf("\nYour age is less than 18");
        else if(age>30)  
            printf("\nYour age is greater than 30");

    return 0;   
}