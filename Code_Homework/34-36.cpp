#include <iostream>
#include <string>
#include <vector>

struct Student
{
	std::string first_name;
	std::string last_name;
	int age;
	std::vector<std::string> subjects;
};

int main()
{
	Student* student = new Student();

	student->first_name = "anun";
	student->last_name = "azganun";
	student->age = 69;
	student->subjects.push_back("Maths");
	student->subjects.push_back("Physics");
	student->subjects.push_back("English");

	delete student;

	Student* student1 = new Student();

	student1->first_name = "anun1";
	student1->last_name = "azganun1";
	student1->age = 69;
	student1->subjects.push_back("Maths");
	student1->subjects.push_back("Physics");
	student1->subjects.push_back("English");

	Student* student2 = new Student();

	student2->first_name = "anun2";
	student2->last_name = "azganun2";
	student2->age = 70;
	student2->subjects.push_back("Maths");
	student2->subjects.push_back("Physics");
	student2->subjects.push_back("English");

	if (student1->age > student2->age)
	{
		std::cout << student1->first_name;
	}
	else
	{
		std::cout << student2->first_name;
	}

	Student* student3 = new Student();


	student3->first_name = student1->first_name;
	student3->last_name = student2->last_name;
	student3->age = (student1->age + student2->age) / 2;

	delete student1;
	delete student2;
	delete student3;

	return 0;
}