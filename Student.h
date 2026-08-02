#include <utility>
#include <vector>
#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person
{
private:
    string rollNo;
    string branch;
    string semester;
    double cgpa;
    string interest;

    vector<string> skills;
    vector<string> projects;
    string resumePath;
    vector<pair<string,string>> certificates;
    vector<pair<string,string>> internshipLetters;
    vector<pair<string,string>> projectReports;

public:
    Student();
    
    void registerStudent();
    void displayStudent();

    // Getters
    string getRollNo();
    string getBranch();
    string getSemester();
    double getCGPA();
    string getInterest();

    // Setters
    void setBranch(string b);
    void setSemester(string s);
    void setCGPA(double c);
    void setInterest(string i);

    // Skills
    void addSkill();
    void viewSkills();

    // Projects
    void addProject();
    void viewProjects();

    // Resume
    void uploadResume();
    void viewResume();

    // Certificates
    void uploadCertificate();
    void viewCertificates();

    // Internship
    void uploadInternship();
    void viewInternships();

    // Project Documents
    void uploadProjectDocument();
    void viewProjectDocuments();

    void careerRecommendation();
    void careerScore();
};

#endif