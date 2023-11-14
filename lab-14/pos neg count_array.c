#include<stdio.h>
void main(){
	int n,i,pos_count=0,neg_count=0;
	printf("Enter size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter element at a[%d]",i);
		scanf("%d",&a[i]);
		if(a[i]<0){
			neg_count=neg_count+1;
		}else if(a[i]>0){
			pos_count=pos_count+1;
		}
	}
	printf("no. of positive=%d\n",pos_count);
	printf("no. of negative=%d",neg_count);
}
