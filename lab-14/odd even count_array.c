#include<stdio.h>
void main(){
	int n,i,even_count=0,odd_count=0;
	printf("Enter size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter element at a[%d]",i);
		scanf("%d",&a[i]);
		if(a[i]%2==0){
			even_count=even_count+1;
		}else{
		odd_count=odd_count+1;
		}
	}
	printf("no. of even=%d\n",even_count);
	printf("no. of odd=%d",odd_count);
}
