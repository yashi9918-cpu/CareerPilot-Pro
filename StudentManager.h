#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H
#include "FileManager.h"
#include <vector>
#include "Student.h"

using namespace std;

class StudentManager
{
private:
    vector<Student> students;
    FileManager fileManager;
public:
    void addStudent();
    void viewStudents();
    void searchStudent();
    void updateStudent();
    void deleteStudent();
    // Skills
    void addSkill();
    void viewSkills();

    // Projects
    void addProject();
    void viewProjects();
//certificate
void uploadCertificate();
void viewCertificates();
//resume
void uploadResume();
void viewResume();
void uploadInternship();
void viewInternships();

void uploadProjectDocument();
void viewProjectDocuments();

void saveData();
void careerRecommendation();
    int totalStudents();
};

#endif