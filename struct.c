#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
	char name[20];
	int age;
	char subject[20];
	float gpa;
};

int main()
{
	struct Student student1;
	student1.age=17;
	student1.gpa=4.0;
	strcpy(student1.name, "Karttikeya");
	strcpy(student1.subject, "Maths");

	printf("%s\n", student1.name);

	return 0;
}
