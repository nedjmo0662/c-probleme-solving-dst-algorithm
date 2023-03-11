#include<iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
char a=65;
char b;
int n=5;

for(int i=1; i<=5; i++){
for(int j=1; j<=n*2; j++){

if(j<=(n*2)/2){
cout << a;
a++;
}
else
{
cout << char(a-1) ;
a--;
}
}
a=65;
cout << endl;
n-=1;
}

/*int n=0,c=1;
for(int i=0; i<5; i++){
for(int j=0; j<=i; j++){

cout << n;
n=n+;
}
cout << endl;
}*/

return 0;
}