#include <iostream>
# include <string>

using namespace std;

int main()
{
   int n = 10;
int l = 1;
int r = 1;
for(int i = 1 ; i =n ; i++){
    for(int j =1 ; j = n ;j++){

       if (j==(n/2)){
        cout << "*";

       }
       if (j<(n/2) && j>=((n/2)-l)){
        cout << "/";

       }
        if (j>(n/2)&& j<=((n/2)+r))
           cout << "\\" ;

    }

cout << endl;
r++;
l++;
}

    return 0;
}
