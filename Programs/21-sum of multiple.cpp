#include<iostream>
using namespace std;

int main()
{
int a;
int y;
int z;
   cout << "enter a number:" ;
cin >> a;
for(int i =1; i <=a; i++){
y=i*3 ;
z=i*5;
if(y<a )
{
cout << y << " ";
}

if(z<a)
{
cout << z << " ";

}
}
    return 0;
}