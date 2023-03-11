#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

 int num,sum=0, mult=1,d;
cin >> num;

while(num>0){
d=num%10;
sum+=d;
mult*=d;
num=num/10;
}
if(sum==mult){
cout <<"spy";
}
else {
cout << "not";
}
    return 0;
    
}