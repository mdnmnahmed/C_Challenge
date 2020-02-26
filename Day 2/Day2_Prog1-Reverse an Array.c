#include<stdio.h>

void main(){
	int arr[100], num, i;
	printf("How many Numbers you want to Insert : ");
	scanf("%d", &num);
		
	for(i=1; i<=num; i++){
		printf("Enter the %d Number of the Array : ",i);
		scanf("%d", &arr[i]);		
	}
	
	printf("\nOriginal Array : ");
	for(i=1;i<=num; i++){
		printf("%3d", arr[i]);
	}
	
	printf("\nReversed Array : ");
	for(i=num; i>=1; i--){
		printf("%3d", arr[i]);
	}
	
}
