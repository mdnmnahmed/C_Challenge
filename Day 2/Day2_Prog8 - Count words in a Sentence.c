#include<stdio.h>
#include<string.h>

void main(){
	char sentence[100];
	int word=1,i=0;
	
	printf("Type a Sentence : ");
	gets(sentence);

	while(sentence[i] != '\0'){
		if(sentence[i]==' ' || sentence[i]=='\n' || sentence[i]=='\t'){
			word++;
		}
		i++;
	}
	
	printf("\n%s",sentence);	
	printf("\nNumber of Words in the Sentence : %d",word);	
}
