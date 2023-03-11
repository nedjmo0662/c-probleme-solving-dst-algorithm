#include<iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
int j,n=1,c=0,b=1;
 for(int i=1; i<=5; i++){

for(j=1; j<=i; j++){

cout << n;

n=n+c;

c=n-c;
}

cout << endl;
}

return 0;
}