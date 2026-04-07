#include<stdio.h>
int main(){
	int j,n[10],i,tem;
	for(i=0;i<10;i++){
		printf("ENter num: ");
		scanf("%d",&n[i]);
	}
	for(i=9;i>=1;i--){
		for(j=0;j<9;j++){
			if(n[j]>n[j+1]){
				tem=n[j];
				n[j]=n[j+1];
				n[j+1]=tem;
			}
		}
	}
	for(i=0;i<10;i++){
		printf(" %d ",n[i]);
	}
}