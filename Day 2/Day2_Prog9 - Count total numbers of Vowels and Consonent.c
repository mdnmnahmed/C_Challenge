#include<stdio.h>
#include<string.h>

void main(){
	char string[100];
	int vowel=0, consonant=0, i=0;
	
	printf("Enter the String : ");
	gets(string);

	while(string[i] != '\0'){
		
		if(string[i]=='A' || string[i]=='a' || string[i]=='E' || string[i]=='e' || string[i]=='I' || string[i]=='i' || string[i]=='O' || string[i]=='o' || string[i]=='U' || string[i]=='u' ){
			vowel++;
		}else{
			consonant++;
		}
		
		i++;
	}
	
	printf("\nString is : %s",string);	
	printf("\nNumber of Vowels in the String : %d",vowel);
	printf("\nNumber of Consonant in the String : %d",consonant);
}

