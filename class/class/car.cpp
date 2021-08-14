#include "car.h"
#include <iostream>


car::car(int m):maker(m)
{

}



car::~car()
{
   
}

void car::setmaker(int m)
{
    maker = m;
    
}


int car::getm()
{
    return maker;
}



car car :: operator +(car c2) {

    int m = maker + c2.maker;

    return car(m);
}
