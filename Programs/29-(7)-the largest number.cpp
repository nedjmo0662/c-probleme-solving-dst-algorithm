#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int num,r;
cout << "enter n number:";

cin >> num;

cout << "enter the numbers:";
int num1[num];

for(int i=0; i<num; i++){

cin >> num1[i];
}

for(int j=0; j<num; j++){

if(num1[j]>num1[j+1]){

 int r=num1[j];
  num1[j]=num1[j+1];
num1[j+1]=r;
}
else{

int r=num1[j+1];
}
}
cout << num1[(num-1)];

    return 0;
    
}