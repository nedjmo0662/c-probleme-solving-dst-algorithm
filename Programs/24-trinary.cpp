#include<iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
string trinary;
int sum=0,x=0;
bool nontrinary =false;
cout << "enter a trinaty number:";
cin >> trinary;
for(int i=(trinary.size()-1); i>=0; i--){
if(trinary[i]!='2'&& trinary[i]!='1' && trinary[i]!='0')
{
nontrinary=true;
}
else if(trinary [i]=='0'){
sum = sum+(0*(3^x));

}
else if(trinary [i]=='1'){
sum = sum+(1*pow(3,x));

}
else if(trinary [i]=='2'){
sum = sum+(2*pow(3,x));

}
x++;
}

if(nontrinary==true){
cout << "there's an invalid numbers";
}
else {
cout << sum;
}




return 0;
}