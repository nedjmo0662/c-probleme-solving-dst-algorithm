#include <iostream>

using namespace std;

int main()
{
    int k =4;
    int n =6;
    for(int i =1 ; i<=5 ; i++){
      for(int j= 1 ; j<=5 ; j++){
       if(i==5||j==5) {
        cout << "*";

       }
        else if (j<n&&j>k){
          cout << "*";

        }
        else
            {
            cout << " ";
        }


      }

        cout << endl ;
        k--;
        n--;
    }
    return 0;
}
