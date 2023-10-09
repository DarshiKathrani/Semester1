#include<stdio.h>
void main(){
	int a,c;
	scanf("%d",&a);
	c=a%10;
	if(c%2==0){
		printf("last digit is even");
	}else{
		printf("last digit is odd");
	}
}
