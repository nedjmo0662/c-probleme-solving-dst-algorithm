#include <iostream>

using namespace std;

int main()
{
   string dna1;
   string dna2;
   cout << "enter your first string :";
   cin >> dna1;
   cout << "enter your second string :";
   cin >> dna2;

   int def=0;
   int hd=0;
   int w;

   int y=dna2.size();
   int x=dna1.size();
 // for(int i=0 ; i<=x; i++){
    //for(int j=0 ; j<=y; j++){

    if(x>y){
        w=x-y;
    hd=w;
   // cout << hd;
    }

    else if (y>x){

        w=y-x;
        hd=w;
        //cout << hd;
    }
    if (x>y){
    for(int i=0 ; i<y; i++){

     if(dna1[i]!=dna2[i]){
       def++;

     }
    }
    cout << "the diference betwin characters :" << def;
    }


if (y>x){
    for(int i=0 ; i<x; i++){

     if(dna1[i]!=dna2[i]){
       def++;
     }

    }
    cout << "the diference betwin characters :"<< def;
    }
cout << "\n"<< "the diference betwin the size :" <<hd ;



    return 0;
}
