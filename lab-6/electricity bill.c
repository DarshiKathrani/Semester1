  #include<stdio.h>
void main(){
	int inputunits;
	float amount,totalbill,final;
	printf("Enter the input units:");
	scanf("%d",&inputunits);
	if(inputunits<=50){
		amount=inputunits*0.5;
	}else if(inputunits<=150){
		//inputunits=inputunits-50;
		amount=25+((inputunits-50)*0.75);
	}else if(inputunits<=250){
		//inputunits=inputunits-100;
        amount=100+((inputunits-100)*1.20);
	}else{
		//inputunits=inputunits-250;
		amount=220+((inputunits-250)*1.5);
		totalbill=amount*0.2;
		final=amount+totalbill;
		printf("Electricity bill=%f",final);
	}
}
