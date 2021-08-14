#include <iostream>

using namespace std;

int main()

{
   //cout << "hello world";
    int n;

    for (int i = 1 ; i<=10 ; i++){

     for(int y = 1 ; y<=10 ; y++ ){

         if (i==1||i==10){
            cout << "#";

        }

       else if (y==1||y==10){
           cout << "#" ;

}

else

     {
    cout << " " ;

     }
     }
cout << endl ;


    }

    return 0;
}
