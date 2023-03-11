#include<iostream>

using namespace std;

int main()
{
  
int num,sum=0;
cout << "enter a number:";
cin >> num;
for(int i=1; i<=num; i++){
if(num%i==0){
sum++;
}
}
if(sum==2){
cout << "prime";
}
else {
cout << "not";
}
    return 0;
    
}