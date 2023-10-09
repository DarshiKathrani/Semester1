#include<stdio.h>
void main(){
int R,G,B;
float C,M,Y,K,W,max;
printf("Enter R:");
scanf("%d",&R);	
printf("Enter G:");
scanf("%d",&G);	
printf("Enter B:");
scanf("%d",&B);
R=R/255;
G=G/255;
B=B/255;
if(R>=G && R>=B){
	max=R;
}if(G>=R && G>=B){
	max=G;
}else if(B>=R && B>=G){
	max=B;
}
W=max;
printf("White=%f",W);
 C=(W-R)/W;
 printf("Cyan=%f",C);
 M=(W-G)/W;
 printf("Magenta=%f",M);
 Y=(W-B)/W;
 printf("Yellow=%f",Y);
 K=1-W;
 printf("Black=%f",K);
}
