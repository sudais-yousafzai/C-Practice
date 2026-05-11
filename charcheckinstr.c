#include<stdio.h>
#include<string.h>
void Charcheck(char string[120],char ch,int count);
int main(){
    char string[100],ch;
    printf("Enter a String: ");
    gets(string);
    printf("Enter a character which you find in string: ");
    scanf("%c",&ch);
    Charcheck(string,ch,strlen(string));
    return 0;
}
void Charcheck(char string[120],char ch,int count){
    int i;
    for ( i = 0; string[i]!='\0'; i++){
        if (string[i]==ch){
            printf("Character is found:)");
            break;
        }    
    }
    if(i==count){
        printf("Character is not found:)");
    }


    
}