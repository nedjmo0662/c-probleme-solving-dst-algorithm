#include <iostream>

using namespace std;

int main()
{
int al[8]={10,6,4,5,2,1,3,7};
   int ch;
   int k = 7;
   for (int j =0; j <9 ; j++){
   for (int i =0; i<=k ; i++){

    if (al[i]>al[i+1]){
         ch =al[i];
        al[i]=al[i+1];
        al[i+1]=ch;}



   }

//cout << endl;
   k--;
}
cout << al[0] << al[1] << al[2] << al[3] << al[4] << al[5] << al[6] << al[7];

    return 0;
}
