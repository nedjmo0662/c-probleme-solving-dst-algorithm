#include "student.h"

student::student()
{
    std::cout << "non base\n";
}
//
//student::student(std::string g, std::string n, int a, int m, std::string t)
//{
//    mo = m;
//    teacher = t;
//}
student::~student()
{
}

void student::setmo(int m) 
{
    mo = m;
}

int student::getmo()
{
    return mo;
}

void student::settea(std::string t)
{
    teacher = t;
}

std::string student::gettea()
{
    return teacher;
}

