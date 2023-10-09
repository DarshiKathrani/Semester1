#include<stdio.h>
void main(){
	char a=97,c=65;
	while(a>=97 && a<=122 || c>=65 && c<=90){
		printf("%c\n",a);
		printf("%c",c);
		a++;
		c++;
	}
}
