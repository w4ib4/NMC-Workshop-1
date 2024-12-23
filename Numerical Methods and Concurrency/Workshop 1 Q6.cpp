#include <stdio.h>

int main(){
	for(char ch = 'A'; ch<= 'E'; ch++){
		for(int j = 'A'; j<=ch; j++){
			printf("%c ",ch);
		}
		printf("\n");
	}
	return 0;
}