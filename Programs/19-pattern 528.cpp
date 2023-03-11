#include<iostream>
#include <math.h>
using namespace std;

int main()
{
int n=4,m=4;

for(int i=1; i<=7; i++){
for(int j=1; j<=7; j++){

if(j<n||j>m){
cout <<"#";
}
else
cout << "•";

}
if(i<4){
n--;
m++;
}
else {
n++;
m--;
}
cout <<endl;

}
return 0;
}