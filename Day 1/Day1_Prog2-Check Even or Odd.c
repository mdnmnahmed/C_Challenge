#include<stdio.h>
void main(){
	int num;
	printf("Enter an Integer Number to Check Even or Odd: \n");
	scanf("%d", &num);
	if(num % 2 == 0){
		printf("%d is an Even Number",num);
	}else{
		printf("%d is a Odd Number",num);
	}
}
