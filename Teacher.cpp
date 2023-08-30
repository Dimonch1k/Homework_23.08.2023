#include "Teacher.h"


Teacher::Teacher(string name, string surname, int age, string subject) : Person(name, age)
{
	this->subject = subject;
	this->surname = surname;
}

void Teacher::display()
{
	cout << "Teacher:\n\n";
	cout << "Name: " << getName() << "\n";
	cout << "Surname: " << getSurname() << "\n";
	cout << "Age: " << getAge() << "\n";
	cout << "Subject: " << getSubject() << "\n\n\n";
}

string Teacher::getSubject()
{
	return subject;
}

string Teacher::getSurname()
{
	return surname;
}
