#include<stdio.h>
void main(){
	int n,i,max,min,sum=0;
	float avg;
	printf("Enter size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter element at a[%d]",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("Sum=%d\n",sum);
	avg=sum/n;
	printf("Average=%f\n",avg);
	max=a[0];
	for(i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	min=a[0];
	for(i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
	}	
	printf("Maximum=%d\n",max);
	printf("Minimum=%d",min);
}
