#include<iostream>
using namespace std;

int main()
{
    int size=5;
    int i,j,k;
    int ch=0,a=0,b=0;
    for( i=size; i>=1; i--)
    {
        for( j=(i-1); j>=1; j--)
        {
            cout << " ";
        }
        for( k=ch; k>=-(ch); k--)
        {

            
            
            cout << char(b-abs(k)+a+65);
            
            
        }
        
        ch++;
        a--;
        b+=2;

        cout << endl;

    }

    return 0;
}