#include<stdio.h>

void main(){
	int arr1[100], arr2[100], num, i;
	printf("How many Numbers you want to Insert : ");
	scanf("%d", &num);
		
	for(i=1; i<=num; i++){
		printf("Enter the %d Number of the Array : ",i);
		scanf("%d", &arr1[i]);		
	}
	
	printf("\nFirst Array : ");
	for(i=1;i<=num; i++){
		printf("%4d", arr1[i]);
	}

	for(i=1;i<=num; i++){
		printf("\n\tCoping %d number Element : %d",i,arr1[i]);
		arr2[i] = arr1[i];
	}

	printf("\n\nSecond Array : ");
	for(i=1;i<=num; i++){
		printf("%4d", arr2[i]);
	}	
}
