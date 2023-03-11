#include<iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
char a=68;
int n=7,c=2,d=2;
for(int i=1; i<=7; i++){
for(int j=1; j<=7; j++){
if(j>=n && ((j%2)!=0))
{
cout << a ;
a++;
}
else {
cout << " ";
}
}



cout << endl;

if(i<4){
n-=2;
a-=c;
c++;
}

else{

a=68;
n+=2;
a-=d;
d--;
}
}

return 0;
}