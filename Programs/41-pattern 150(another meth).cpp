#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int n=0,p=1,c=1;
for(int i=1; i<=5; i++){

for(int j=5; j>=i; j--){
cout << " ";

}
p=1;
cout << p;

while (c<i){
cout << (p*=2);
c++;
}
while(c>1){
cout << (p/=2);
c--;
}

cout<< endl;

}

    return 0;
    
}