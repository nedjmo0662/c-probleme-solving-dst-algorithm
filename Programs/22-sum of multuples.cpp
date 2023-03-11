#include<iostream>
using namespace std;

int main()
{
int a;
int y;
int z;
int m=0;
int sum1;
int sum2;
int c=0,r=0;
   cout << "enter a number:" ;
cin >> a;
for(int i =1; i <=a; i++){
y=i*3 ;
z=i*5;
if(y<a )
{
cout << y << " ";
sum1 =r+y;
r=sum1;
}

if(z<a)
{
cout << z << " ";
sum2 =c+z;
c=sum2;
}
}
cout << endl << sum1+sum2;
    return 0;
}