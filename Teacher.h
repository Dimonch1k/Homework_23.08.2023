#pragma once
#include <iostream>
using namespace std;

#include "Person.h"
class Teacher :
    public Person
{
private:
    string subject;
    string surname;

public:
    Teacher(string name, string surname, int age, string subject);
    
    void display() override;
    
    string getSubject();
    string getSurname();
};

