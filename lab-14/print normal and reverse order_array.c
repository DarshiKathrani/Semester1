#include<stdio.h>
void main(){
	int n,i;
	printf("Enter size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter element at a[%d]:",i);
		scanf("%d",&a[i]);
    }printf("Normal order:\n");
    for(i=0;i<n;i++){
    	printf("%d\n",a[i]);
	}
		printf("Reverse order:\n");
	for(i=n-1;i>=0;i--){
		printf("%d\n  ",a[i]);
	}	
	}
