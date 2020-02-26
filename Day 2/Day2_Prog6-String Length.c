#include<stdio.h>

void main(){
	char string[100];
	int len = 0;
	printf("Enter the String : ");
	scanf("%s", &string);	
	while(string[len] != '\0'){
		len++;
	}
	printf("%d", len);
}
