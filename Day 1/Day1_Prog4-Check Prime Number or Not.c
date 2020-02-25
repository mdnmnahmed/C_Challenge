#include<stdio.h>
void main(){
	int num, i, prime = 0;
	printf("Enter a Integer Number to Check Prime Number or Not : ");
	scanf("%d",&num);
	
	for(i=1; i<=num; i++){
		if(num % i == 0){
			prime++;
		}
	}
	
	if(prime == 2){
		printf("%d is a Prime Number",num);
	}else{
		printf("%d is not a Prime Number",num);
	}
}
