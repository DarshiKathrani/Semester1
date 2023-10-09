#include<stdio.h>
void main(){
	int x,y,i,ans=1;
	scanf("%d %d",&x,&y);
	for(i=1;i<=y;i++){
		ans=ans*x;
	}
	printf("%d",ans);
}
