#include<stdio.h>
void main(){
	int n=1,evencount=0,oddcount=0,count=0;
	scanf("%d",&n);
	while(count<=10){
		if(n%2==0){
			evencount=evencount+1;
		}else{
			oddcount=oddcount+1;
		}
		scanf("%d",&n);
		count++;
	}
	printf("Evencount=%d\n",evencount);
	printf("Oddcount=%d",oddcount);
}
