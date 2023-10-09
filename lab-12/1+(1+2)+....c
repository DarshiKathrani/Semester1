#include<stdio.h>
void main(){
	int n,i,sum=0,j,ans=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=0;
	for(j=1;j<=i;j++){
		sum=sum+j;
	}
	ans=ans+sum;
}

printf("%d",ans);
}
