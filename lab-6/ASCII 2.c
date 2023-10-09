#include<stdio.h>
void main(){
	char a;
	printf("Enter a number:");
	scanf("%c",&a);
	if(a>=65 && a<=90){
		printf("Uppercase letter");
	}else if(a>=97 && a<=122){
		printf("Lowercase letter");
	}     else if(a>=48 && a<=57){
    	printf("Digit");
	}          else{
		printf("Special value");
	}
}
