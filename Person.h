#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int age;
    string email;

public:
    Person();

    void setPersonDetails();
    void displayPersonDetails();

    string getName();
    string getEmail();
    int getAge();
};

#endif