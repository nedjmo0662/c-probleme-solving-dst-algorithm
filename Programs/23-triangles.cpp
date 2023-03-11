#include<iostream>
using namespace std;

int main()
{
int side1;
int side2;
int side3;
 cout << "the first side of the triangle: ";
cin >> side1;
cout << "the second side of the triangle: ";
cin >> side2;
   cout << "the third side of the triangle: ";
cin >> side3;

if(side1<=0||side2<=0||side3<=0)
{
cout << "wrong dimensions";
}

else if(side1==side2 && side3==side2)
{
cout << "the triangle is equilateral";

}
 else if(side1==side2&& side1!=side3||side1==side3&&side1!=side2||side2==side3&&side2!=side1)
   {
cout << "the triangle is isosceles";
}
    else if(side1!=side2&&side3!=side1)
    
   {
cout << "the triangle is scalen";
}

      return 0;
}