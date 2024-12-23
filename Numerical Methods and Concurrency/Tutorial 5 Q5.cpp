#include <stdio.h>

struct Address{
		char province [20];
		char district [20];
		char city [20];
		int ward;
};
struct Student{
		int roll;
		char name [50];
		float mark;
		struct Address add;
};
int main(){
	struct Student student1;
	printf("Enter your roll no: ");
	scanf("%d",&student1.roll);
	printf("Enter your name: ");
	scanf("%s",&student1.name);
	printf("Enter your marks: ");
	scanf("%f",&student1.mark);
	printf("Enter you province: ");
	scanf("%s",&student1.add.province);
	printf("Enter you district: ");
	scanf("%s",&student1.add.district);
	printf("Enter you city: ");
	scanf("%s",&student1.add.city);
	printf("Enter your ward: ");
	scanf("%d",&student1.add.ward);
	printf("Name: %s\n",student1.name);
	printf("Roll No. : %d\n",student1.roll);
	printf("Marks: %.2f\n",&student1.mark);
	printf("Province: %s\n",student1.add.province);
	printf("District: %s\n",student1.add.district);
	printf("City: %s\n",student1.add.city);
	printf("Ward: %d\n",student1.add.ward);
	return 0;
}