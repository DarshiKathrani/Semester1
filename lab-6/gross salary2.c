#include<stdio.h>
void main(){
	int a;
	float b,c,d;
	printf("Enter the basic salary:");
	scanf("%d",&a);
	if(a>=10000 && a<20000){
	b=0.2*a;
	c=0.8*a;
	d=(a+b+c);
	printf("Gross salary=%f",d);
    }else if(a>=20000 && a<30000){
    b=0.25*a;
    c=0.9*a;
    d=(a+b+c);
    printf("Gross Salary=%f",d);
	}else if(a>=30000){
		b=0.3*a;
		c=0.95*a;
		d=(a+b+c);
		printf("Gross salary=%f",d);
	}
}
