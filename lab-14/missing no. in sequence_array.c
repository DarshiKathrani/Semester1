#include<stdio.h>
void main(){
	int n,i,j,count=0;
	printf("Entr size of aray:");
	scanf("%d",&n);
	int a[n],max;
	for(i=0;i<n;i++){
		printf("Enter elements at a[%d]",i);
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<n;i++){
		if(a[i]>a[0]){
			max=a[i];
		}
	}
	int b[max+1];
    for(i=0;i<max+1;i++){
    	b[i]=0;
    	if(i==a[i]){
    		b[i]++;
		}
	}
	for(i=0;i<max+1;i++){
		if(b[i]==0){
			printf("%d",i);
		}
	}
}
