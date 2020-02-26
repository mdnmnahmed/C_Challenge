#include<stdio.h>
#include<string.h>

void main(){
	char string[100], stringChar, upperChar;
	int i=0;
	
	printf("Enter the String : ");
	gets(string);

	while(string[i] != '\0'){
		stringChar = string[i];
		putchar (toupper(stringChar));
		
		i++;
	}
}

