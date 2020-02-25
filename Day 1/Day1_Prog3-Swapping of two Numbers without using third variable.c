#include<stdio.h>
void main(){
	int a = 10,b = 20;
	printf("Before Swaping of 2 Numbers : A = %d, B = %d \n",a,b);
	a = a+b;	//30
	b = a-b;	//10
	a = a-b;	//20
	printf("After Swaping of 2 Numbers : A = %d, B = %d",a,b);
}
