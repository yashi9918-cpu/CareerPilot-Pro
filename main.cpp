#include <iostream>

#include "Dashboard.h"
#include "StudentManager.h"

using namespace std;

int main()
{
    Dashboard dashboard;

    StudentManager manager;

    int choice;

    do
    {
        dashboard.showMenu();

        cout << "Enter Choice : ";
        cin >> choice;

        cin.ignore();

        switch(choice)
{
case 1:
    manager.addStudent();
    break;

case 2:
    manager.viewStudents();
    break;

case 3:
    manager.searchStudent();
    break;

case 4:
    manager.updateStudent();
    break;

case 5:
    manager.deleteStudent();
    break;

case 6:
{
    int ch;

    cout << "\n========== SKILLS ==========\n";
    cout << "1. Add Skill\n";
    cout << "2. View Skills\n";
    cout << "3. Back\n";

    cout << "Enter Choice : ";
    cin >> ch;
    cin.ignore();

    if(ch == 1)
        manager.addSkill();

    else if(ch == 2)
        manager.viewSkills();

    break;
}

case 7:
{
    int ch;

    cout << "\n========== DOCUMENTS ==========\n";
    cout << "1. Upload Resume\n";
    cout << "2. View Resume\n";
    cout << "3. Upload Certificate\n";
    cout << "4. View Certificates\n";
    cout << "5. Upload Internship Letter\n";
    cout << "6. View Internship Letters\n";
    cout << "7. Upload Project Report\n";
    cout << "8. View Project Reports\n";
    cout << "9. Back\n";

    cout << "Enter Choice : ";
    cin >> ch;
    cin.ignore();

    switch(ch)
    {
        case 1:
            manager.uploadResume();
            break;

        case 2:
            manager.viewResume();
            break;

        case 3:
            manager.uploadCertificate();
            break;

        case 4:
            manager.viewCertificates();
            break;

        case 5:
            manager.uploadInternship();
            break;

        case 6:
            manager.viewInternships();
            break;

        case 7:
            manager.uploadProjectDocument();
            break;

        case 8:
            manager.viewProjectDocuments();
            break;
    }

    break;
}

case 8:
{
    int ch;

    cout << "\n========== PROJECTS ==========\n";
    cout << "1. Add Project\n";
    cout << "2. View Projects\n";
    cout << "3. Back\n";

    cout << "Enter Choice : ";
    cin >> ch;
    cin.ignore();

    if(ch == 1)
        manager.addProject();

    else if(ch == 2)
        manager.viewProjects();

    break;
}


case 9:

manager.careerRecommendation();

break;
case 10:

manager.saveData();

break;

case 11:
    cout << "\nThank You For Using CareerPilot Pro!\n";
    break;

default:
    cout << "\nInvalid Choice!\n";
}

    }
    while(choice != 11);

    return 0;

}