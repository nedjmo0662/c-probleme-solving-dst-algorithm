#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int num,f=1;
cout << "enter a number:";
cin >> num;

for(int i=1; i<=num; i++){
f=f*i;
}

cout << f;
    return 0;
    
}