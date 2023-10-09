#include<stdio.h>
#include<conio.h>
void main(){
	float a,b,c;
	printf("Enter side1:");
	scanf("%f",&a);
    printf("Enter side2:");
	scanf("%f",&b);
	printf("Enter side3:");
	scanf("%f",&c);
	if(a==b && a==c){
		printf("Triangle is equilateral");
	}else if((a==b && a!=c) || (a!=b && a==c) || (b==c && c!=a)){
		printf("Triangle is isosceles");
	}//else if(a!=b && a!=c && b!=c){
		//printf("Triangle is scalene");
	else if((pow(a,2)+pow(b,2)==pow(c,2)) || (pow(b,2)+pow(c,2)==pow(a,2)) || (pow(a,2)+pow(c,2)==pow(b,2))){
		printf("Triangle is right angled");	
	}else if(a!=b && a!=c && b!=c){
		printf("Triangle is scalene");
}
}
