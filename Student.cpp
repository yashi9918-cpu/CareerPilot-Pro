#include "Student.h"

Student::Student()
{
    rollNo = "";
    branch = "";
    semester = "";
    cgpa = 0.0;
    interest = "";
}

void Student::registerStudent()
{
    cout << "\n========== STUDENT REGISTRATION ==========\n";

    setPersonDetails();

    cout << "Enter Roll Number: ";
    getline(cin, rollNo);

    cout << "Enter Branch: ";
    getline(cin, branch);

    cout << "Enter Semester: ";
    getline(cin, semester);

    cout << "Enter CGPA: ";
    cin >> cgpa;

    cin.ignore();

    cout << "Enter Interest (AI/Web/Data/App): ";
    getline(cin, interest);
}

void Student::displayStudent()
{
    displayPersonDetails();

    cout << "\n========== STUDENT DETAILS ==========\n";
    cout << "Roll Number : " << rollNo << endl;
    cout << "Branch      : " << branch << endl;
    cout << "Semester    : " << semester << endl;
    cout << "CGPA        : " << cgpa << endl;
    cout << "Interest    : " << interest << endl;
}

string Student::getInterest()
{
    return interest;
}

double Student::getCGPA()
{
    return cgpa;
}
string Student::getRollNo()
{
    return rollNo;
}
string Student::getBranch()
{
    return branch;
}

string Student::getSemester()
{
    return semester;
}

void Student::setBranch(string b)
{
    branch = b;
}

void Student::setSemester(string s)
{
    semester = s;
}

void Student::setCGPA(double c)
{
    cgpa = c;
}

void Student::setInterest(string i)
{
    interest = i;
}
void Student::addSkill()
{
    string skill;

    cout << "\nEnter Skill: ";
    getline(cin, skill);

    skills.push_back(skill);

    cout << "\nSkill Added Successfully!\n";
}
void Student::viewSkills()
{
    if(skills.empty())
    {
        cout << "\nNo Skills Added Yet!\n";
        return;
    }

    cout << "\n========== YOUR SKILLS ==========\n";

    for(int i = 0; i < skills.size(); i++)
    {
        cout << i + 1 << ". " << skills[i] << endl;
    }
}
void Student::addProject()
{
    string project;

    cout << "\nEnter Project Name: ";
    getline(cin, project);

    projects.push_back(project);

    cout << "\nProject Added Successfully!\n";
}

void Student::viewProjects()
{
    if(projects.empty())
    {
        cout << "\nNo Projects Added Yet!\n";
        return;
    }

    cout << "\n========== PROJECTS ==========\n";

    for(int i = 0; i < projects.size(); i++)
    {
        cout << i + 1 << ". " << projects[i] << endl;
    }
}
void Student::uploadCertificate()
{
    string certificateName;
    string filePath;

    cout << "\nEnter Certificate Name: ";
    getline(cin, certificateName);

    cout << "Enter Certificate File Path: ";
    getline(cin, filePath);

    certificates.push_back({certificateName, filePath});

    cout << "\nCertificate Uploaded Successfully!\n";
}
void Student::viewCertificates()
{
    if(certificates.empty())
    {
        cout << "\nNo Certificates Uploaded!\n";
        return;
    }

    cout << "\n========== CERTIFICATES ==========\n";

    for(int i=0;i<certificates.size();i++)
    {
        cout << "\nCertificate " << i+1 << endl;
        cout << "Name : " << certificates[i].first << endl;
        cout << "File : " << certificates[i].second << endl;
    }
}
void Student::uploadResume()
{
    cout << "\nEnter Resume File Path: ";
    getline(cin, resumePath);

    cout << "\nResume Uploaded Successfully!\n";
}

void Student::viewResume()
{
    if(resumePath.empty())
    {
        cout << "\nNo Resume Uploaded!\n";
        return;
    }

    cout << "\n========== RESUME ==========\n";
    cout << "Resume File : " << resumePath << endl;
}
void Student::uploadInternship()
{
    string company;
    string file;

    cout << "\nEnter Company Name : ";
    getline(cin, company);

    cout << "Enter Offer Letter Path : ";
    getline(cin, file);

    internshipLetters.push_back({company,file});

    cout << "\nInternship Letter Uploaded Successfully!\n";
}

void Student::viewInternships()
{
    if(internshipLetters.empty())
    {
        cout<<"\nNo Internship Letters Uploaded!\n";
        return;
    }

    cout<<"\n========== INTERNSHIPS ==========\n";

    for(int i=0;i<internshipLetters.size();i++)
    {
        cout<<"\nCompany : "<<internshipLetters[i].first<<endl;
        cout<<"File    : "<<internshipLetters[i].second<<endl;
    }
}
void Student::uploadProjectDocument()
{
    string project;
    string file;

    cout<<"\nEnter Project Name : ";
    getline(cin,project);

    cout<<"Enter Project Report Path : ";
    getline(cin,file);

    projectReports.push_back({project,file});

    cout<<"\nProject Report Uploaded Successfully!\n";
}

void Student::viewProjectDocuments()
{
    if(projectReports.empty())
    {
        cout<<"\nNo Project Reports Uploaded!\n";
        return;
    }

    cout<<"\n========== PROJECT REPORTS ==========\n";

    for(int i=0;i<projectReports.size();i++)
    {
        cout<<"\nProject : "<<projectReports[i].first<<endl;
        cout<<"Report  : "<<projectReports[i].second<<endl;
    }
}
void Student::careerRecommendation()
{
    cout << "\n=========================================\n";
    cout << "      CAREER RECOMMENDATION\n";
    cout << "=========================================\n";

    if(cgpa >= 9 && interest == "AI")
    {
        cout << "Recommended Career : Machine Learning Engineer\n";
        cout << "Suggested Skills : Python, TensorFlow, PyTorch\n";
    }

    else if(cgpa >= 8 && interest == "Web")
    {
        cout << "Recommended Career : Full Stack Developer\n";
        cout << "Suggested Skills : React, Node.js, MongoDB\n";
    }

    else if(interest == "Data")
    {
        cout << "Recommended Career : Data Scientist\n";
        cout << "Suggested Skills : SQL, Python, Power BI\n";
    }

    else if(interest == "App")
    {
        cout << "Recommended Career : Android Developer\n";
        cout << "Suggested Skills : Flutter, Firebase\n";
    }

    else
    {
        cout << "Recommended Career : Software Developer\n";
    }

    careerScore();   // Displays score automatically
}
void Student::careerScore()
{
    int score = 0;

    score += (int)(cgpa * 8);

    score += skills.size() * 4;

    score += projects.size() * 6;

    score += certificates.size() * 2;

    if(score > 100)
        score = 100;

    cout << "\nCareer Readiness Score : " << score << " / 100\n";

    if(score >= 90)
        cout << "Excellent Profile ⭐⭐⭐⭐⭐\n";

    else if(score >= 75)
        cout << "Very Good Profile ⭐⭐⭐⭐\n";

    else if(score >= 60)
        cout << "Good Profile ⭐⭐⭐\n";

    else
        cout << "Needs Improvement ⭐⭐\n";
}