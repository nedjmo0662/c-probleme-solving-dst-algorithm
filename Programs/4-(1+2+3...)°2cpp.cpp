#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
int x;
int c;
int b;
int q=0;
int m=1;
int r;
int p=0;
int o=0;
cin >> c;
for(int j=1; j<=2 ; j++){
for(int i =1; i<=c; i++){

if(j==1){
r=o+pow(i,2);
o=r;
m+=1;
}

else if(j==2){
b=p+i;
p=b;
}

}

}
cout<<r<<"\n";
cout<<pow(p,2)<< "\n";
int def1 =r-pow(p,2);
int def2 = pow(p,2)-r;
cout << def1 << "\n"<< def2;

return 0;
}