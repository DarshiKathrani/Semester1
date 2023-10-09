#include<stdio.h>
void main(){
	int i=1,n,sum=0,count=0,r,m=1,temp;
	scanf("%d",&n);
	temp=n;
	while(n!=0){
		n=n/10;
		count=count+1;
	}  
	n=temp;
	while(n!=0){
		r=n%10;
		m=1;
		while(i<=count){
			m=r*m;
			i++;
		}
		sum=sum+m;
		n=n/10;
	}
	n=temp;
	if(sum=temp){
		printf("No. is armstrong");
	}else{
		printf("No. is not armstrong");
	}
	
}
