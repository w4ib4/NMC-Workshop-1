#include <stdio.h>
void midPoint(int x1, int y1, int x2, int y2){
	float xmid = (x1+x2)/2.0;
	float ymid = (y1+y2)/2.0;
	
	printf("The midpoint is: (%.2f, %.2f)\n",xmid,ymid);
}
int main(){
	
	int x1,y1,x2,y2;
	
	printf("Enter the coordinates of the first point: ");
	scanf("%d %d", &x1, &y1);
	
	printf("Enter the coordinates of second point: ");
	scanf("%d %d", &x2, &y2);
	
	midPoint(x1,y1,x2,y2);
	return 0;
}