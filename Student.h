#pragma once
#include <iostream>
using namespace std;

#include "Person.h"
class Student
	: public Person
{
private:
	float mathRate;
	float englishRate;
	float physikRate;

public:
	Student(string name, int age, float mathRate, float englishRate, float physikRate);
	float calcAverageScore();

	void display() override;

	float getMathRate();
	float getEnglishRate();
	float getPhysikRate();
};

