#include<iostream>
#include<math.h>

using namespace std;

int main()
{
  
int num;
cout<<"enter a number : ";
cin >> num;

int m=num;

int sum=0;

int def=0,a=1,r=1,i=0,y=0;
//int d=0,a=0,i=0;

while(r>=0){

def=num-a;
a*=10;
if(def>=0){
i++;
}
else
{
r=-1;
}
}

//cout << i; 

while(num>0){
y=num%10;
sum+=pow(y,i);
num=num/10;
}
if(sum==m){
cout <<m<< " is armstrong number";
}
else{
cout << m << " is not armstrong number";
}

    return 0;
}