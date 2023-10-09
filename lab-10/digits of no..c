#include<stdio.h>
void main(){
	int n,a;
	scanf("%d",&n);
	while(n!=0){
		a=n%10;
		printf("%d\n",a);
		n=n/10;
	}
}
