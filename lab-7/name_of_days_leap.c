#include<stdio.h>
void main(){
	int a,leap_year;
	scanf("%d",&a);
	switch(a){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:printf("31 days");
		         break;
		case 4:
		case 6:
		case 9:
		case 11:printf("30 days");
		        break;
		case 2:printf("Enter year:");
		       scanf("%d",&leap_year);
		if(leap_year%400==0 && leap_year%100==0){
			printf("29 days");
		}else if(leap_year%4==0){
			printf("29 days");
		}				 	
		   else{
		   	printf("28 days");
		   }
		   break;
	}
}
