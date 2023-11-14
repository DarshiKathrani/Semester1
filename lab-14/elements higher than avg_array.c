#include<stdio.h>
void main(){
	int n,i,count=0,sum=0;
	float avg;
	printf("Enter size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter element at a[%d]",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	    avg=sum/n;
	for(i=0;i<n;i++){
		if(a[i]>avg){
			count=count+1;
		}
	}    
	printf("%d",count);
}
