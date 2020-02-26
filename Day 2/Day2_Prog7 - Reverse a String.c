#include<stdio.h>
void main(){
	char string[100], revString[100];
	int beg, end, count = 0;
	
	printf("Enter a String to Reverse: \n");
	scanf("%s",&string);

	printf("Original String : %s\n",string);	
	
	while(string[count] != '\0'){
		count++;	//String Length
	}
	end = count - 1;
	
	for(beg=0; beg<=count; beg++){
		revString[beg] = string[end];
		end--;
	}
	
	revString[beg] = '\0';
	printf("Reversed String : %s", revString);
}
