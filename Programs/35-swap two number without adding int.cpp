#include<iostream>
#include<math.h>

using namespace std;

void f(int x, int y){

y=y+x;

 x=y-x;

 y-=x;

//x=x-1;

//y=(y-1);
cout << "x:"<< x;
cout <<"\ny:"<< y;

}
int main()
{
int x,y;

cout << "enter x:\n";
cin >> x;
cout << "enter y:\n";
cin >> y;
f(x,y);


    return 0;
}