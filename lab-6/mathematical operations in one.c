#include<stdio.h>
void main(){
	int a,b,c,d;
	printf("For add:1");
	printf("For subtract:2");
	printf("For multiply:3");
	printf("For divide:4");
	printf("Enter the operation:");
	scanf("%d",&c);
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	if(c==1){
		d=a+b;
		printf("Ans is:%d",d);
	}
	if(c==2){
		d=a-b;
		printf("Ans is:%d",d);	
	}
	if(c==3){
		d=a*b;
		printf("Ans is:%d",d);
	}
	if(c==4){
		d=a/b;
		printf("Ans is:%d",d);
	}
}
