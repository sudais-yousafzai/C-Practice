#include<stdio.h>
int max_of_4(int a,int b,int c,int d);
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int max=max_of_4(a,b,c,d);
    printf("max=%d\n",max);
}

int max_of_4(int a,int b,int c,int d){
    int max;
    max= (a>b)?a:b;
    max=(max<c)?c:max;
    max=(max<d)?d:max;
    return max;
}