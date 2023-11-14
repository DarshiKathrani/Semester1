#include<stdio.h>
void main(){
	int n,i,sum=0,ans=1;
	float avg,gm,hm,rec=0;
	printf("Enter size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter element at a[%d]",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
		ans=ans*a[i];
		rec=(rec+(1.0/a[i]));
	}
	avg=sum/n;
	gm=pow(ans,1.0/n);
	hm=n/rec;
	printf("%f\n %f\n %f\n",avg,gm,hm);
}
