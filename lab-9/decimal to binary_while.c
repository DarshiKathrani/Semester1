#include<stdio.h>
void main(){
	int n,m=1,r,b=0;
	scanf("%d",&n);
	while(n!=0){
		r=n%2;
		b=b+(r*m);
		m=m*10;
		n=n/2;
	}
	printf("%d",b);
}
