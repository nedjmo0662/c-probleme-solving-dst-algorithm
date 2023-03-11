#include<iostream>
#include <math.h>
using namespace std;

int main()
{
int a;
int t ,z=0;
cout << "enter the chess number:";
cin >> a;
if(a<=64&&a>0){

cout << pow(2,(a-1))<<endl;
}
for(int i =0; i<64 ;i++){

t = z+pow(2,i);
z=t;
}
cout << t;
return 0;
}