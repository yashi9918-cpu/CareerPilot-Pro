#include "Person.h"

Person::Person()
{
    name = "";
    age = 0;
    email = "";
}

void Person::setPersonDetails()
{
    cout << "\nEnter Name: ";
    getline(cin, name);

    cout << "Enter Age: ";
    cin >> age;

    cin.ignore();

    cout << "Enter Email: ";
    getline(cin, email);
}

void Person::displayPersonDetails()
{
    cout << "\n========== PERSON DETAILS ==========\n";
    cout << "Name  : " << name << endl;
    cout << "Age   : " << age << endl;
    cout << "Email : " << email << endl;
}

string Person::getName()
{
    return name;
}

string Person::getEmail()
{
    return email;
}

int Person::getAge()
{
    return age;
}