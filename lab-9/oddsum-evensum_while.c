#include<stdio.h>
void main(){
	int i=1,n,a=0,b=0,ans;
	scanf("%d",&n);
	while(i<=n){
	if(i%2==0){
		a=a+i;
	}else{
		b=b+i;
	}
	i++;
	}
	ans=a-b;
	printf("Ans=%d",ans);
}
