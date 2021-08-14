#include <iostream>
#include <stdio.h>

using namespace std;
int ned (int x){
int r=x;
    //(size_t t, string m){
if (x!=1){

r*= ned(x-1);
}

return r;
}


int main()
{
    /*int a;
cin >> a;*/
cout << ned(4);


//size_t t;
//cout << t;
    return 0;
}
