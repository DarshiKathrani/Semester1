#include<stdio.h>
void main(){
	int a,b,c,d,e;
	float f;
	printf("Enter subject1:\n");
	printf("Enter subject2:\n");
	printf("Enter subject3:\n");
	printf("Enter subject4:\n");
	printf("Enter subject5:\n");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	f=(a+b+c+d+e)/5;
	if(f<=35){
		printf("Fail");
	}else if(f>=36 && f<=45){
		printf("Pass class");		
	}     else if(f>=46 && f<=60){
		printf("Second class");
	}          else if(f>=61 && f<=90){
		printf("First class");
	}else{
		printf("Distinction");
	}
}
