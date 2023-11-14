#include<stdio.h>
void main(){
	int h,count=0,a[5],b[5];
	for(h=0;h<5;h++){
		printf("Enter element at a[%d] & b[%d]",h ,  h);
		scanf("%d %d",&a[h],&b[h]);
		if(a[h]>170 && b[h]<50){
			count=count+1;
		}	
	}
	printf("%d",count);
}
