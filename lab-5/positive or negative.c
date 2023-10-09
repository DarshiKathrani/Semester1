#include<stdio.h>
void main(){
	int a;
	printf("Enter a:");
	scanf("%d",&a);
	if(a>=0){
		if(a==0){
			printf("a is zero");
		}else{
			printf("a is positive");
		}else{
		printf("a is negative");
		}
		//printf("a is negative");
	}
}
