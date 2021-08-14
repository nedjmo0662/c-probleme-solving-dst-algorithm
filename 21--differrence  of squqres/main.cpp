#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int y=1;
    int x;
    int r=1 ;
    int c;
    cout << "enter a number: ";
    cin >> x;
    for(int i = 1;i<=x;i++){
//for (int j = 1 ; j <= x ; j++){
c = pow(i,2)+pow(r,2);
if (i<x){
        r=i++;
      }
  else{

  r=0;
}


cout<<c;
    }
    return 0;
}
