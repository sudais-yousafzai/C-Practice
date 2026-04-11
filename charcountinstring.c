#include<stdio.h>
int strcount(char string[150]);
int main(){
    char string[100];
    int count;
    printf("Enter a string for count no of characters: ");
    gets(string);
    count=strcount(string);
    printf("No of characters is: %d",count);
    return 0;
}
int strcount(char string[150]){
    int n=0,i;
    for(i=0;string[i]!='\0';i++){
        n++;
    }
    return n;
}