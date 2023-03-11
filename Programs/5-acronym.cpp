#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
int a;
cin >> a;
string name ;
cin.ignore();//to cin the name even if ther's another cin befor it
getline(cin,name);
cout << name[0];
for(int i=0; i<name.size(); i++){

if(name[i]==' '){

cout << name[i+1];

}

  }
      return 0;
}