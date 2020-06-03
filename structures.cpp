#include<stdio.h>
#include<string.h>

struct Student
{
    char name[25];
    int age;
    float marks[3];
};

int main()
{
    struct Student s1,s2;
    printf("enter first student details");
    scanf("%s",s1.name);
    scanf("%d",&s1.age);
	for(int i=0;i<3;i++)
    scanf("%f",&s1.marks[i]);
    printf("enter second student details");

    scanf("%s",s2.name);
    scanf("%d",&s2.age);
	for(int i=0;i<3;i++)
    scanf("%f",&s2.marks[i]);
   
    printf("Name of Student 1: %s\n", s1.name);
    printf("Age of Student 1: %d\n", s1.age);
	printf("Marks of students:\n");
	for(int i=0;i<3;i++)
    printf("%f\n",s1.marks[i]);


    printf("Name of Student 2: %s\n", s2.name);
    printf("Age of Student 2: %d\n", s2.age);
	printf("Marks of students:\n");
   for(int i=0;i<3;i++)
    printf("%f\n",s2.marks[i]);
    return 0;
}
