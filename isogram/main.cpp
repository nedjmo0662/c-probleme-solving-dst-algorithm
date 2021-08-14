#include <iostream>
#include <string>
#include <cstdlib>
//#include <ctime>
#include <windows.h>
using namespace std;

int main()
{
    string word ;
    int m = 0;
    while(1){

   cin >> word ;
   for(int i =0 ; i<word.length() ; i++){
    for(int j =0 ; j<word.length() ; j++){

       if(word[i]!=word[j]){
        m++;
       }
    }


   }
   if(m==((word.length())*(word.length()-(1)))){//-(word.length()-1)){

    cout << "isogram\n";

   }
   else {
    cout << "non\n";
   }
   m=0;
   Sleep(1000);
   system("cls");


   }
    return 0;
}
