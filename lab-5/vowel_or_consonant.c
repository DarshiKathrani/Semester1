#include<stdio.h>
void main(){
	char c;
	scanf("%c",&c);
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
		printf("Character is vowel");
	}else{
		printf("Character is consonant");
	}
}
