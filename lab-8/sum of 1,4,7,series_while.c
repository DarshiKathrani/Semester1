#include<stdio.h>
void main(){
	int i=1,n,sum=0;
	scanf("%d",&n);
	while(i<=n){
		sum=sum+i;
		i=i+3;
	}
	printf("Sum=%d",sum);
}
