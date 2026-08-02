#include "FileManager.h"
#include <fstream>

void FileManager::saveStudents(vector<Student>& students)
{
    ofstream file("CareerPilot_Data.txt");

    if(!file)
    {
        cout<<"Error Opening File!\n";
        return;
    }

    file<<"========== CAREERPILOT DATABASE ==========\n\n";

    for(int i=0;i<students.size();i++)
    {
        file<<"Student "<<i+1<<"\n";
        file<<"---------------------------------\n";
        file<<"Name : "<<students[i].getName()<<endl;
        file<<"Age : "<<students[i].getAge()<<endl;
        file<<"Email : "<<students[i].getEmail()<<endl;
        file<<"Roll No : "<<students[i].getRollNo()<<endl;
        file<<"Branch : "<<students[i].getBranch()<<endl;
        file<<"Semester : "<<students[i].getSemester()<<endl;
        file<<"CGPA : "<<students[i].getCGPA()<<endl;
        file<<"Interest : "<<students[i].getInterest()<<endl;
        file<<"\n";
    }

    file.close();

    cout<<"\nData Saved Successfully!\n";
}