#include<stdio.h>

void main(){
	int arr[100], num, i, sum=0;
	printf("How many Numbers you want to Insert : ");
	scanf("%d", &num);
		
	for(i=1; i<=num; i++){
		printf("Enter the %d Number of the Array : ",i);
		scanf("%d", &arr[i]);		
	}
	
	printf("\nArray : ");
	for(i=1;i<=num; i++){
		printf("%4d", arr[i]);
		sum += arr[i];
	}
	
	printf("\nSum : %d",sum);
	
	
	
}
