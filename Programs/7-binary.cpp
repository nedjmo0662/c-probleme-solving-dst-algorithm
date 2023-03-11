#include<iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
int error=0;
int t=0;
int x=0;
int m=0;
string bin;
while(1){
cin >> bin;
int n=bin.length();

for(int i=0; i<n; i++)
{
if(bin[i]!='0'&&bin[i]!='1'){
error+=1;
}
}

for(int j=(n-1); j>=0; j--)
{
if(bin[j]=='1'){
m=t+(1*(pow(2,x)));
t=m;
}
else
{
m=t+(0*(pow(2,x)));
t=m;
}

x++;
}
if(error>0)
{
cout << "error\n";
}
else
cout << m <<endl;
error=0;
}
return 0;
}