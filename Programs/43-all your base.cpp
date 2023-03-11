#include<iostream>
#include <math.h>
using namespace std;

int main()
{
int a,b,total=0,f=0;
cout << "enter the number :";
cin >> a;
cout << "in base :";
cin >> b;
while(a>0){

int d=a%10;
if(d>=b){
cout << "the base wrong";
break;
}
else{
total+=d*pow(b,f);
f++;
a=a/10;

}

}
cout << total;
return 0;
}