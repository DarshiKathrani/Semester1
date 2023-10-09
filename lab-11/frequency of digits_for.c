#include<stdio.h>
void main(){
	int n,count=0,r,i;
	scanf("%d",&n);
	for(i=1;n!=0;i++){
		r=n%10;
		count=count+1;
		n=n/10;
	}
	printf("Frequency of digits in given no.=%d",count);
}
