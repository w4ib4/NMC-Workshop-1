#include <stdio.h>
int main(){

    struct Student{
	    char name[50];
	    int roll;
	    float gpa;
	
    }s1,s2;
    printf("Enter your name:");
    scanf("%s",&s1.name);
    
    printf("Enter roll number: ");
    scanf("%d",&s2.roll);
    printf("Name: %s\n",s1.name);
    printf("Your roll no is %d",s2.roll);
}