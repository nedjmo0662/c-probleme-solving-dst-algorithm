#include<iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
int n,z=0,y=0;
int midd=2 , mi=0, w=6;
cin >> n;
for(int i=1; i<=n; i++){
for(int j=1; j<=((n*2)-1); j++){
if(j==(n-y)||j==(n+y)){
cout <<'1';
}
else if (i>2 && j==(n-mi) || i>2&& j==(n+mi)){
cout << y;
}
else if(i>4 && j==(n))
{
cout << w;
}
else 
cout << " ";
}
cout << endl;
y++;
if(i>2){
mi+=1;
}
if(i>4){
w++;
}
}
return 0;
}