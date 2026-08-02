#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include<vector>
#include "Student.h"

using namespace std;

class FileManager
{
public:

    void saveStudents(vector<Student>& students);

    void loadStudents(vector<Student>& students);
};

#endif