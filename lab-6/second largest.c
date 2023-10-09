#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("Enter c:");
	scanf("%d",&c);
	if(a>=b && a>=c){
		if(b>=c){
			printf("b is second largest%d",b);
		}else{
			printf("c is second largest%d",c);
		}
	}else if(b>=a && b>=c){
		if(a>=c){
			printf("a is second largest%d",a);
		}else{
			printf("c is second largest%d",c);
		}
	}else if(c<=a){
		printf("a is second largest%d",a);
	}else{
		printf("b is second largest%d",b);
	}
	}
