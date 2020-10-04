#include <stdio.h>
int main(){    
	int n,r,sum=0,num;    
	printf("enter the number: ");    
	scanf("%d",&n);    
	num=n;

	do{    
		r=n%10;    
		sum=sum+(r*r*r);    
		n=n/10;    
	}
	while(n>0);

	if(num==sum){    
		printf("%d is an armstrong  number ",num); 
	}   
	else {   
		printf("%d is not an armstrong number ",num);
	}    
	return 0;  
}   