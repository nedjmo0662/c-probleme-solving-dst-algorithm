#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int s,j=0;

    cin >> s;
  int x=s;

    while(s>10){

        s=s/10;
    j++;

    }

   int j1=j;
    int arr [j];

while (x>0){

 int   n=x%10;

 arr[j]=n;
   x=x/10;
   j--;

}

cout << arr[0]<<endl ;

int l=9,m=0,b=0,q=0;

for(int i =0;i<=j1; i++){

   if(arr[i]<=l){

    l=arr[i];
    q=i;

   }
}
//cout << l << "\n"<<q<< arr[0] <<endl ;
int r=arr[0];
arr[0]=l;
arr[q]=r;

for(int j=0 ; j<=j1; j++){
    cout << arr[j];

}
//cout << endl  << "\n" <<  0 << "\n" << q <<  endl;




return 0;
}
