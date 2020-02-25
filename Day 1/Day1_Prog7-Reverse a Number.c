#include<stdio.h>
void main(){
	int num, rev=0, rem;
	
	printf("Enter a Number to print it's Reverse : ");
	scanf("%d",&num);
	
	printf("Original Number : %d\n",num);
	
	while(num != 0){
		rem = num % 10;
		rev = rev * 10 + rem;
		num /= 10;
	}
	printf("Reversed Number : %d",rev);
}
