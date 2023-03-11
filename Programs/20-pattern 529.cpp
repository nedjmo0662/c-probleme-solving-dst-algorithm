#include<iostream>

using namespace std;

int main()
{
int n=7;
int y=4;
int a=1;
int b=8;
for(int i=1; i<=n; i++){
for(int j=1; j<=8; j++){
if(j<=a||j>=b)
{
cout << "*";
}
else if(i==4)
cout << "*";

else {
cout << " ";
}
}
cout << endl;
if(i<=3){
a++;
b--;
}
else
{
a--;
b++;
}
}

    return 0;
}