#include<stdio.h>
void main(){
	int n,sum=0;
	float avg=0;
	scanf("%d",&n);
	while(n!=0){
		sum=sum+n;
		avg=sum/n;
		scanf("%d",&n);
	}
	printf("Sum=%d\n",sum);
	printf("Average=%f",avg);
}
