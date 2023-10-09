#include<stdio.h>
void main(){
	int n1=0,n2=1,n3,i,count;
	scanf("%d",&count);
	printf("%d %d ",n1,n2);
	for(i=2;i<count;i++){
		n3=n1+n2;
		printf("%d ",n3);
		n1=n2;
		n2=n3;
		          
	}
	
}
