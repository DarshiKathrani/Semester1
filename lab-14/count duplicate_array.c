#include<stdio.h>
void main(){
	int n,i,j,count=0;
	printf("Entr size of aray:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter elements at a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
	for(j=i+1;j<n;j++){
		if(a[i]==a[j]){
			count++;
			break;
		}    
	}	  
	}
	printf("%d",count);
}
