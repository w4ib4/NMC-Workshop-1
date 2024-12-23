#include <stdio.h>

int main(){
	const char *weekdays[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	
	printf("The names of the weekdays are: \n");
	for (int i = 0; i < 7; i++){
		printf("%s\n", weekdays[i]);
	}
	return 0;
}