#include<iostream>

using namespace std;

int main()
{
  int a,sum=0;
cout << "enter a number:";
cin >> a;
for(int i=1; i<=(a/2); i++){

if((a%i)==0){
sum+=i;
}
}
if(sum==a){
cout << a<<" is a perfect number";
}
else{
cout <<a<< " is not a perfect number";
}

    return 0;
    
}