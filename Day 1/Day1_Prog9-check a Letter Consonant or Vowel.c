#include<stdio.h>
void main(){
	char letter;
	printf("Enter a Letter to check Consonant or Vowel : ");
	scanf("%c",&letter);
	
	switch(letter){
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
			printf("%c is a Vowel",letter);
			break;
		default:
			printf("%c is a Consonant",letter);
	}
}
