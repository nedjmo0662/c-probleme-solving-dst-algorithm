#include<iostream>
using namespace std;

int main()
{
int size=5;
int i,j,k;
int ch=0;
for( i=size; i>=1; i--)
{
for( j=(i-1); j>=1; j--)
{
cout << " ";
}
for( k=ch; k>=-(ch); k--)
{
cout << char(abs(k)+65);
}
ch++;
cout << endl;

}

    return 0;
}