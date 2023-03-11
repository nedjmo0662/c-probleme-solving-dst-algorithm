#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int num,r=0;
cout << "enter n number:";

cin >> num;

cout << "enter the numbers:";
int num1[num];

for(int i=0; i<num; i++){

cin >> num1[i];
}

for(int j=0; j<num; j++){

if(num1[j]>r){

r=num1[j];
 
}
}
cout << r;

    return 0;
    
}