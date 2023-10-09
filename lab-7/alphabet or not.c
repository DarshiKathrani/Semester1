#include<stdio.h>
void main(){
	char a,b;
	printf("Enter character:");
	scanf("%c",&a);
b=((a>=97 && a<=122) || (a>=65 && a<=90))?(printf("Alphabet")):(printf("Not Alphabet"));

	
}
