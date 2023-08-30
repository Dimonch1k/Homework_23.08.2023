#include "Student.h"


Student::Student(string name, int age, float mathRate, float englishRate, float physikRate) : Person(name, age)
{
	this->mathRate = mathRate;
	this->englishRate = englishRate;
	this->physikRate = physikRate;
}

float Student::calcAverageScore()
{
	 return (getMathRate() + getEnglishRate() + getPhysikRate()) / 3; 
}

void Student::display()
{
	cout << "Name: " << getName() << "\n";
	cout << "Age: " << getAge() << "\n";
	cout << "Math rate: " << getMathRate() << "\n";
	cout << "English rate: " << getEnglishRate() << "\n";
	cout << "Physik rate: " << getPhysikRate() << "\n";
	cout << "Average rate is: " << calcAverageScore() << "\n\n\n";
}

float Student::getMathRate()
{
	return mathRate;
}

float Student::getEnglishRate()
{
	return englishRate;
}

float Student::getPhysikRate()
{
	return physikRate;
}

