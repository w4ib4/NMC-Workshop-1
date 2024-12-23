#include <stdio.h>

int main(){
	char ch;
	printf("Enter characters (press Enter to stop):\n");
	while((ch = getchar()) != '\n'){
		if (ch >= 'A' && ch<='Z'){
			ch = ch + ('a' - 'A');
		}
		printf("%c\n",ch);
	}
	return 0;
}