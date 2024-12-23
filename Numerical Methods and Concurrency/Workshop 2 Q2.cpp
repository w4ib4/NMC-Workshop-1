#include <stdio.h>

int greatestNum(int x, int y){
	if(x>y){
		printf("The greates among these two number is : %d\n",x);
	}else{
		printf("The greates among these two number is : %d\n",y);
	}
	
}
int main(){
	int x,y;
	printf("Enter two numbers : ");
	scanf("%d %d", &x, &y);
	
	greatestNum(x,y);
	return 0;
}