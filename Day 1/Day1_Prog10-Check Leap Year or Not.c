#include<stdio.h>
void main(){
	int year;
	printf("Enter the Year to Check Leap Year or Not : ");
	scanf("%d",&year);
	
	if(year % 400 == 0 || year % 4 == 0){
		printf("%d is a Leap Year",year);
	}else{
		printf("%d is not a Leap Year",year);
	}
}
