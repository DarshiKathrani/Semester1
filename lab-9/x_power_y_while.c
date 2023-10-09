#include<stdio.h>
void main(){
	int x,y,ans=1,count=1;
	scanf("%d %d",&x,&y);
	while(count<=y){
		ans=ans*x;
		count++;
	}
	printf("Ans=%d",ans);
}
