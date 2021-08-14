#include <iostream>

using namespace std;

int main()
{
  string a;
  int x;
  int y=0;
while(1){
  cout<<"enter a word= ";
  cin>>a;
  x=a.size();

 for(int i=0; i<x; i++){
   for (int j=0; j<x; j++){

   if (a[i]==a[j]){

   y++;

    }

   /* else if(a[i]!=a[j]){

        cout<<"isogram"<<endl;
    }
    cout<<endl;
   }
  */

 }
}
 if(y>x){
    cout<<"non\n";
 }
    else {
        cout<<"isogram\n";

    }
    y=0;
}
    return 0;
}
