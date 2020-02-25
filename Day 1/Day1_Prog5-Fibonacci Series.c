#include<stdio.h>
void main(){
	int num,a,b,c,i;
	printf("Enter the n'th term of the Fibonacci Series : ");
	scanf("%d",&num);
	
	a = 1;
	b = 1;
	printf("Fibonacci Series upto %d'th Term :- \n",num);
	printf("%d\t%d",a,b);
	
	for(i=1; i<=num; i++){
		c = a+b;
		printf("\t%d",c);
		a = b;
		b = c;
	}	
}
