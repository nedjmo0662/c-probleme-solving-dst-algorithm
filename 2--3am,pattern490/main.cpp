#include <iostream>

using namespace std;

int main()
{

int x=1;
int n=5;
int py=1;
int px=1;
for(int row=x; row<n;row++){

    for(int col=x;col<n*2;col++){

     if(col==n)   {
        cout<<row;

     }
        else if(col<n&&col>=n-px){

            cout << "(";
        }

    else if(col>n&&col<=n+py){

        cout << ")";
    }

    else {
            cout << " ";
   }

    }

  cout<<endl;
px+=1;
py+=1;
}

    return 0;
}
