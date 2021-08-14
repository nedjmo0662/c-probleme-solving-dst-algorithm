#include <iostream>

using namespace std;



int main()
{



    cout << "what do you want sur :\n";
    cout << "----------------------\n\n";
   cout << "1-sabon" << "\t\t\t2-jafel\n";
   int a;
   cin >> a;
   switch (a) {
   case 1:
    cout << "choose the type that you want sur :\n";
    cout << "1-isis\t";
    cout << "2-hajra\t";
    cout << "3-lechat\n";
    int type;
    cin >> type;
    switch (type){
   case 1:
   cout << "you've choose isis,the pay 50dz for liter";
   break;
   case 2:
    cout << "you've choose hajra,the pay 50dz for liter";
    break;
   case 3:
    cout << "you've choose le chat,the pay 50dz for liter";
    break ;
    }
    break;

   case 2:
    cout << "choose the type that you want sur :\n";
    cout << "-------------------------------------\n";
cout << "1-jafel\t";
cout << "2-sanibon\t";
cout << "3-grizil\n";
int type2;
cin >> type;
switch (type){
case 1 :
    cout << "you've choose jafel,then pay 20dz for liter\n";
    cout << "or 100dz for 5liter";
break;
case 2 :
    cout << "you've choose sanibon,then pay 20dz for liter\n";
     cout << "or 100dz for 5liter";
     break;
     case 3 :
         cout << "you've choose grizil,then pay 20dz for liter\n";
       cout << "or 100dz for 5liter";
       break;

}
break;

   }

    return 0;
}
