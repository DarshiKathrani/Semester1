#include<stdio.h>
void main(){
	int n,a,b=0,i,j=0,k,x,sum;
	scanf("%d",&n);
	while(n!=0){
		a=n%10;
		b=b*10+a;
		n=n/10;
	}
	i=b%10;
	while(b!=0){
		k=b%10;
		j=j*10+k;
		b=b/10;
	}
	x=j%10;
	sum=i+x;
	printf("Sum=%d",sum);
}
