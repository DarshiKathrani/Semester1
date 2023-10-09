#include<stdio.h>
void main(){
	int n,i=2,count=0;
	scanf("%d",&n);
	while(i<=n/2){
		if(n%i==0){
			count++;
		}
		i++;
	}if(count==0){
		printf("no. is prime");
	}else{
		printf("no. is not prime");
	}
}
