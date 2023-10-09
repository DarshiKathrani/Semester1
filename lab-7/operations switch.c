#include<stdio.h>
void main(){
	int a,b,c;
	float d;
	scanf("%d %d",&a,&b);
	scanf("%d",&c);
	switch(c){
		case 1:d=a+b;
		       printf("%f",d);
		       break;
		case 2:d=a-b;
		       printf("%f",d);
		       break;
	    case 3:d=a*b;
		       printf("%f",d);
		       break;
		case 4:d=a/b;
		       printf("%f",d);
		       break;
		default:printf("Invalid input");
		        break;	   	   	          
	}
}
