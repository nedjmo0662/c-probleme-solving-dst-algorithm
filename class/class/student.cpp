#include "student.h"

student::student()
{

}

student::~student()
{
}

void student::setnum(int a) {
	num = a;

}

int student::getnum() {
	return num;
}

student student::add(student s2)
{
	student r3;
	r3.num = num + s2.num;
	return r3;
}
