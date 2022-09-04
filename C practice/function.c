#include<stdio.h>
void main(void){
	int c,d;
	void max(int,int);
	void min(int,int);
	printf("enter any 2 no.s");
	scanf("%d %d",&c,&d);
	max(c,d);
	min(c,d);
}


intprime(int num){
	int i;
	for(i=2;i<=num/2;i++){
		if(num%i==0){
			return 0;
		}
	}
	return 1;
}
int armstrom(int num){
	int digits,last digit,sum=0,originalnum;
		digits=log10(num)+1;
		originalnm==num;
	while(num>0){
		lastdigit=num%10;
		sum=sum+round(pow(lastdigit,digits));
		num=num/10;	
	}
	return(originalnum==sum);
	
}
int perfect(int num){
	int i;
	for(i=1;i<=num/2;i++){
		
	}
}
