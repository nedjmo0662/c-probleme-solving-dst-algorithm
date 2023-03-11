#include<iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
cout << "enter a year to see if a leap:\n";
int year ;
while(2){
cin >> year ;
if(year%4==0&&year%100==0&&year%400==0||year%4==0&&year%100!=0&&year%400!=0 ){
cout << "leap\n";
}
else {
cout << "notleap\n";
}
}


return 0;
}