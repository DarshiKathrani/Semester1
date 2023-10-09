#include<stdio.h>
void main(){
	int n,a,b=0;
	scanf("%d",&n);
	while(n!=0){
		a=a%10;
		b=b*10+a;
		n=n/10;
	}
	switch(b){
		case 0:printf("Zero");
		       break;
        case 1:printf("One");
		       break;
	    case 2:printf("Two");
		       break;
		case 3:printf("Three");
		       break;    
		case 4:printf("Four");
		       break;
		case 5:printf("Five");
		       break;
		case 6:printf("Zero");
		       break;
		case 7:printf("Seven");
		       break;
		case 8:printf("Eight");
		       break;
		case 9:printf("Nine");
		       break;	   	   	   	   	   	   	      
}
}
