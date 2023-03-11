#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

 string num;
int sum=0,mult=1;
cout << "enter a number:";
cin >> num;
int size=num.size();
for(int i=0; i<size; i++){
if(num[i]=='0'){
sum+=0;
mult*=0;
}

if(num[i]=='1'){
sum+=1;
mult*=1;
}

if(num[i]=='2'){
sum+=2;
mult*=2;
}

if(num[i]=='3'){
sum+=3;
mult*=3;
}

if(num[i]=='4'){
sum+=4;
mult*=4;
}

if(num[i]=='5'){
sum+=5;
mult*=5;
}

if(num[i]=='6'){
sum+=6;
mult*=6;
}

if(num[i]=='7'){
sum+=7;
mult*=7;
}

if(num[i]=='8'){
sum+=8;
mult*=8;
}

if(num[i]=='9'){
sum+=9;
mult*=9;
}
}
if(mult==sum){
cout << "the given number is a spy number";
}
else{
cout << "the given number is not a spy number";
}
    return 0;
    
}