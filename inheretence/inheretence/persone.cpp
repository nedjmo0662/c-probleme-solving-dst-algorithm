#include "persone.h"
//#include <iostream>

persone::persone():name("unknown"),gender("unknown"),age(00)
{
    std::cout << "defult"<< std::endl;
}

persone::persone(std::string n, std::string g, int a):name(n),gender(g),age(a)
{

}

persone::~persone()
{
    
}

void persone::setname(std:: string n)
{
    name = n;
}

std::string persone::getname()
{
    return name;
}

void persone::setgender(std::string g)
{
    gender = g;
}

std::string persone::getgender()
{
    return gender;
}

void persone::setage(int a)
{
    age = a;
}

int persone::getage()
{
    return age;
}
