#include<stdio.h>
void main(){
	int totaldays,years,weeks,days;
	printf("Enter total days:");
	scanf("%d",&totaldays);
	years=totaldays/365;
	days=totaldays%365;
	weeks=days/7;
	days=days%7;
	printf("%d,%d,%d",years,weeks,days);
}
