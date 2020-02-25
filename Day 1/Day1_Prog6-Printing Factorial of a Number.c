#include<stdio.h>
void main(){
 	int num,i,f=1;
 	printf("Enter a Integer number to print it's Factorial : ");
 	scanf("%d",&num);
 
 	printf("Factorial of : %d! = ",num);
 	for(i=1; i<=num; i++){
  		f = f*i; 
 	}
 	printf("%d",f);
}
