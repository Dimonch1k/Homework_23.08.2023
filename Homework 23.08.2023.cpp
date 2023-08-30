#include <iostream>
#include <vector>
using namespace std;


#include "Person.h"
#include "Student.h"
#include "Teacher.h"


int main()
{
	Person* person[5];

	person[0] = new Student("Jura", 15, 4, 3, 5);
	person[1] = new Student("Andriy", 16, 5, 4, 5);
	person[2] = new Student("Vasya", 15, 3, 5, 5);
	person[3] = new Teacher("Andriy", "Romanovych", 34, "Math");
	person[4] = new Teacher("Orest", "Ivanovych", 42, "Musik");

	person[0]->display();
	person[1]->display();
	person[2]->display();
	person[3]->display();
	person[4]->display();
}

