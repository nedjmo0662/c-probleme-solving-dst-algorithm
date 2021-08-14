#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include <string>
using namespace std;

int main()
{
    int ch , ran ;

    cout << "welcom\n";
    cout << "-------\n";
  for (int i = 1 ; i<=8888 ; i++){
    cout << "[1-ston]" << "  " << "[2-payper]" << "  " << "[3-sessore]" << "\n";
     cin >> ch;


     srand(time(0));
     ran = (rand () % 3) +1;
     cout << ran;


 /* int nch[3]={1,2,3};
  int nran[3]={3,1,2};
  int nch1[3]={1,2,3};
  int nran1[3]={1,2,3};
  int nch2[3]={1,2,3};
  int nran2[3]={2,3,1};

  string youwine= "you win";
  string youloose="you loose";
  string youbalanc="you balance" ;

     for(int x=0;x<3;x++){
     if(ch==nch[x]&&ran==nran[x]){
    cout << youwine;

     }
        if (ch==nch1[x]&&ran==nran1[x]){

          cout << youbalanc;

        }
        if (ch==nch2[x]&&ran==nran2[x]){

            cout << youloose;
        }

     }*/
   if(ch==1&&ran==1){
    cout << "stone\n";
    cout << "you've balanced";

   }
   if (ch==1&&ran==2){
    cout << "payper\n";
    cout << "you are loose";

   }

    if (ch==1&&ran==3){
       cout << "sessore\n" ;
       cout << "you win";

    }
    if (ch==2&&ran==1){
        cout << "stone\n";
        cout << "you win";
    }
    if (ch==2&&ran==2){
        cout << "payper\n";
      cout << "you've balanced";
    }
    if (ch==2&&ran==3){
     cout << "sessore\n" ;
    cout << "you loose";

    }
    if (ch==3&&ran==1){
       cout << "stone\n";
        cout << "you are loose";
    }

    if (ch==3&&ran==2){
        cout << "payper";
        cout << "you are wine";
    }
    if (ch==3&&ran==3){
        cout << "sessore\n";
        cout << "you balanced";

    }

    Sleep(3                                                                   000);

    system ("cls");
}



/*for (int h = 1 ; h<=25 ; h++){
srand(time (0));
cout << rand() << "\n";


}*/

    return 0;
}
