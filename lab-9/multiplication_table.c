#include<stdio.h>
void main(){
	int i=1,n,ans;
	scanf("%d",&n);
	while(i<=10){
		ans=n*i;
		printf("%d*%d=%d\n",n,i,ans);
		i++;
	}
}
