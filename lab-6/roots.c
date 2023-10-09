#include<stdio.h>
#include<math.h>
void main(){
	float a,b,c,d,r1,r2;
	printf("Enter coefficient1:");
	scanf("%f",&a);
	printf("Enter coefficient2:");
	scanf("%f",&b);
    printf("Enter coefficient3:");
	scanf("%f",&c);
    d=b*b-4*a*c;
    if(d>0){
    	r1=(-b+(sqrt(d)))/(2*a);
    	r2=(-b-(sqrt(d)))/(2*a);
    	printf("r1=%f and r2=%f",r1,r2);
	}else if(d==0){
		r1=r2=-b/(2*a);
		printf("r1=r2=%f",r1);
	}else{
		printf("roots not possible");
	}

	
}
