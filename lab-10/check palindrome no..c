#include<stdio.h>
void main(){
	int n,i,a,b=0;
	scanf("%d",&n);
	i=n;
	while(n!=0){
		a=n%10;
		b=b*10+a;
		n=n/10;
	}
	if(i==b){
		printf("no. is palindrome");
	}else{
		printf("no. is not palindrome");
	}
}
