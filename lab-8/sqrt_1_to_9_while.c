#include<stdio.h>
#include<math.h>
void main(){
	int n=0;
	float ans;
	while(n<=9){
		ans=sqrt(n);
		printf("Square root of %d=%f\n",n,ans);
		n++;
	}
}
