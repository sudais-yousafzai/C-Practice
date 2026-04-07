#include<stdio.h>
int main(){
	int a,res=0,news;
	printf("Enter a number which you want to sum : ");
	scanf("%d",&a);
	int i=0;
	int j=a;
	while( j>=1){
		res=res+j;
		printf("%d\n",j);
		j--;
		}
	printf("The Sum of all no is %d\n",res);
}