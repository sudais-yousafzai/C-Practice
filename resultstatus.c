#include<stdio.h>
int main(){
    int sub1,sub2,sub3,sub4,sub5,res;
    float per;
    printf("ENter a marks: ");
    scanf("%d",&sub1);
    printf("ENter a marks: ");
    scanf("%d",&sub2);
    printf("ENter a marks: ");
    scanf("%d",&sub3);
    printf("ENter a marks: ");
    scanf("%d",&sub4);
    printf("ENter a marks: ");
    scanf("%d",&sub5);
    res=sub1+sub2+sub3+sub4+sub5;
    per=res*100.0/500.0;
    printf("Your marks is %d out of 500",res);
    printf("\nPercnetage is %.1f\n",per);
    if(per>=50)
        printf("Congratulations!\nYou are pass");
    else
        printf("Fail\nBest Luck for next time");
    return 0;
}