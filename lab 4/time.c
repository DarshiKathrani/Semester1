#include<stdio.h>
void main(){
	int s,h,m,rs;
	printf("Enter seconds:");
	scanf("%d",&s);
	h=s/3600;
	rs=s%3600;
	m=rs/60;
	rs=rs%60;
	printf("%02d:%02d:%02d",h,m,rs);
}
