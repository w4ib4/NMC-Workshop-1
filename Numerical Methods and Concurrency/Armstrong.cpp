#include <stdio.h>
#include <math.h>

int isArmstrong(int num){
	int originalNum = num;
	int sum = 0, count = 0, digit;
	
	while (originalNum != 0){
		originalNum /= 10;
		count ++;
	}
	originalNum = num;
	
	while (originalNum != 0){
		digit = originalNum % 10;
		sum += pow(digit, count);
		originalNum /= 10;
	}
	return (sum == num);
}