#include "StudentManager.h"

void StudentManager::addStudent()
{
    Student s;

    s.registerStudent();

    students.push_back(s);

    cout << "\nStudent Registered Successfully!\n";
}

void StudentManager::viewStudents()
{
    if(students.empty())
    {
        cout << "\nNo Student Found!\n";
        return;
    }

    cout << "\n========== ALL STUDENTS ==========\n";

    for(int i = 0; i < students.size(); i++)
    {
        cout << "\nStudent " << i + 1 << endl;

        students[i].displayStudent();
    }
}

void StudentManager::searchStudent()
{
    string roll;

    cout << "\nEnter Roll Number : ";

    getline(cin, roll);

    bool found = false;

    for(int i=0;i<students.size();i++)
    {
        if(students[i].getRollNo()==roll)
        {
            cout<<"\nStudent Found\n";

            students[i].displayStudent();

            found=true;

            break;
        }
    }

    if(!found)
    {
        cout<<"\nStudent Not Found!\n";
    }
}
void StudentManager::updateStudent()
{
    string roll;

    cout << "\nEnter Roll Number to Update: ";
    getline(cin, roll);

    bool found = false;

    for(int i = 0; i < students.size(); i++)
    {
        if(students[i].getRollNo() == roll)
        {
            found = true;

            cout << "\nStudent Found!\n";

            string branch, semester, interest;
            double cgpa;

            cout << "Enter New Branch: ";
            getline(cin, branch);

            cout << "Enter New Semester: ";
            getline(cin, semester);

            cout << "Enter New CGPA: ";
            cin >> cgpa;
            cin.ignore();

            cout << "Enter New Interest: ";
            getline(cin, interest);

            students[i].setBranch(branch);
            students[i].setSemester(semester);
            students[i].setCGPA(cgpa);
            students[i].setInterest(interest);

            cout << "\nStudent Updated Successfully!\n";

            break;
        }
    }

    if(!found)
    {
        cout << "\nStudent Not Found!\n";
    }
}
int StudentManager::totalStudents()
{
    return students.size();
}
void StudentManager::addSkill()
{
    string roll;

    cout << "\nEnter Roll Number : ";
    getline(cin, roll);

    for(int i = 0; i < students.size(); i++)
    {
        if(students[i].getRollNo() == roll)
        {
            students[i].addSkill();
            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}
void StudentManager::viewSkills()
{
    string roll;

    cout << "\nEnter Roll Number : ";
    getline(cin, roll);

    for(int i = 0; i < students.size(); i++)
    {
        if(students[i].getRollNo() == roll)
        {
            students[i].viewSkills();
            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}
void StudentManager::addProject()
{
    string roll;

    cout << "\nEnter Roll Number : ";
    getline(cin, roll);

    for(int i = 0; i < students.size(); i++)
    {
        if(students[i].getRollNo() == roll)
        {
            students[i].addProject();
            cout << "\nProject Added Successfully!\n";
            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}

void StudentManager::viewProjects()
{
    string roll;

    cout << "\nEnter Roll Number : ";
    getline(cin, roll);

    for(int i = 0; i < students.size(); i++)
    {
        if(students[i].getRollNo() == roll)
        {
            students[i].viewProjects();
            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}
void StudentManager::uploadCertificate()
{
    string roll;

    cout << "\nEnter Roll Number : ";
    getline(cin, roll);

    for(int i=0;i<students.size();i++)
    {
        if(students[i].getRollNo()==roll)
        {
            students[i].uploadCertificate();
            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}
void StudentManager::viewCertificates()
{
    string roll;

    cout << "\nEnter Roll Number : ";
    getline(cin, roll);

    for(int i=0;i<students.size();i++)
    {
        if(students[i].getRollNo()==roll)
        {
            students[i].viewCertificates();
            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}
void StudentManager::uploadResume()
{
    string roll;

    cout << "\nEnter Roll Number : ";
    getline(cin, roll);

    for(int i=0;i<students.size();i++)
    {
        if(students[i].getRollNo()==roll)
        {
            students[i].uploadResume();
            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}
void StudentManager::viewResume()
{
    string roll;

    cout << "\nEnter Roll Number : ";
    getline(cin, roll);

    for(int i=0;i<students.size();i++)
    {
        if(students[i].getRollNo()==roll)
        {
            students[i].viewResume();
            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}
void StudentManager::uploadInternship()
{
    string roll;

    cout << "\nEnter Roll Number: ";
    getline(cin, roll);

    for(int i = 0; i < students.size(); i++)
    {
        if(students[i].getRollNo() == roll)
        {
            students[i].uploadInternship();
            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}

void StudentManager::viewInternships()
{
    string roll;

    cout << "\nEnter Roll Number: ";
    getline(cin, roll);

    for(int i = 0; i < students.size(); i++)
    {
        if(students[i].getRollNo() == roll)
        {
            students[i].viewInternships();
            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}

void StudentManager::uploadProjectDocument()
{
    string roll;

    cout << "\nEnter Roll Number: ";
    getline(cin, roll);

    for(int i = 0; i < students.size(); i++)
    {
        if(students[i].getRollNo() == roll)
        {
            students[i].uploadProjectDocument();
            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}

void StudentManager::viewProjectDocuments()
{
    string roll;

    cout << "\nEnter Roll Number: ";
    getline(cin, roll);

    for(int i = 0; i < students.size(); i++)
    {
        if(students[i].getRollNo() == roll)
        {
            students[i].viewProjectDocuments();
            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}

void StudentManager::saveData()
{
    fileManager.saveStudents(students);
    
}
void StudentManager::careerRecommendation()
{
    string roll;

    cout<<"Enter Roll Number : ";

    getline(cin,roll);

    for(int i=0;i<students.size();i++)
    {
        if(students[i].getRollNo()==roll)
        {
            students[i].careerRecommendation();

            return;
        }
    }

    cout<<"Student Not Found\n";
}
void StudentManager::deleteStudent()
{
    string roll;

    cout << "\nEnter Roll Number to Delete: ";
    getline(cin, roll);

    for(int i = 0; i < students.size(); i++)
    {
        if(students[i].getRollNo() == roll)
        {
            students.erase(students.begin() + i);

            cout << "\nStudent Deleted Successfully!\n";

            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}