#include<iostream>
using namespace std;

int main()
{
int n=0,c=1;
    for(int i=1; i<=5; i++){
    for(int j=1; j<=i; j++){
    cout <<n;

    n=n+c;
    c=n-c;
    }
    n=0;
    c=1;
    cout << endl;
    }
    return 0;
}