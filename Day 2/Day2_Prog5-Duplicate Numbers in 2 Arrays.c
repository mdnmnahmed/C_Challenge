#include<stdio.h>

void main(){
	int arr1[100], arr2[100], num, i, j;
	printf("How many Numbers you want to Insert : ");
	scanf("%d", &num);
	printf("\n\t\tArray 1\n");	
	for(i=1; i<=num; i++){
		printf("Enter the %d Number Element of the Array1 : ",i);
		scanf("%d", &arr1[i]);		
	}
	printf("\n\t\tArray 2\n");
	for(i=1; i<=num; i++){
		printf("Enter the %d Number Element of the Array2 : ",i);
		scanf("%d", &arr2[i]);		
	}
	
	printf("\nFirst Array  : ");
	for(i=1; i<=num; i++){
		printf("%4d", arr1[i]);
	}

	printf("\nSecond Array : ");
	for(i=1; i<=num; i++){
		printf("%4d", arr2[i]);
	}
	
	printf("\n\nDuplicate Elements of the Array1 & Array2 : ");
	for(i=1; i<=num; i++){
		for(j=1; j<=num; j++){
			if(arr1[i] == arr2[j]){
				printf("%3d",arr2[j]);
			}
		}
	}	
}
