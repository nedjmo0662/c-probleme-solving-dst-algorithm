#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int n=0,b=1;
for(int i=0; i<5; i++){

for(int j=5; j>=i; j--){
cout << " ";

}
for(int k=n; k>=(-n); k--){
//if (k==n||k==(-n)){
//cout << '1';
//}
//else{
if(k>0){
cout << b;
b*=2;
}

else{
cout << b;
b=b/2;
}

}
n++;
b=1;
cout << endl;

}
    return 0;
    
}