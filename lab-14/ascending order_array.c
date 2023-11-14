#include<stdio.h>
void main(){
	int n,i,j;
	printf("Enter size of array:");
	scanf("%d",&n);
	int a[n],temp;
	for(i=0;i<n;i++){
		printf("Enter element at a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	for(j=0;j<n;j++){
		printf("%d",a[j]);
	}  
}
