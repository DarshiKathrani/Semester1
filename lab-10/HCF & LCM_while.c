#include<stdio.h>
void main(){
	int n,m,a,b,t,hcf;
	float lcm;
	scanf("%d %d",&n,&m);
	a=n;
	b=m;
	while(b!=0){
		t=b;
		b=a%t;
		a=t;
	}hcf=a;
	lcm=(n*m)/hcf;
	printf("HCF=%d",hcf);
	printf("LCM=%f",lcm);
}
