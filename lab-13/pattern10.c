#include<stdio.h>
void main(){
	int i,j,n=5,a=1;
	for(i=1;i<=n;i++){
	for(j=1;j<=i;j++){
		if(a%2!=0){
			printf("1");
		}else{
			printf("0");
		}
		a++;
	}	
	printf("\n");
	}
	}
