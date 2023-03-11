#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int num,square,d=0;
cout << "enter a number:";
cin >>num;

square=num*num;
while(square>0){
d+=square%10;
square=square/10;
}
if(d==num){
cout << "neon num";
}
else {
cout << "is not neon number";
}
    return 0;
    
}