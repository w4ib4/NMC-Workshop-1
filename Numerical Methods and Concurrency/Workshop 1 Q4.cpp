#include <stdio.h>

int main(){
	char ch;
	
	printf("Enter a character: ");
	scanf(" %c",&ch);
	
	if(ch>= 'A' && ch<='Z'){
		ch = ch + ('a' - 'A');
	}
	printf("The lowercase character is: %c",ch);
	return 0;
}