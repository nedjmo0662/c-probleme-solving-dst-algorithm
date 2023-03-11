#include<iostream>

using namespace std;

int main()
{
  int b;
cout << "the array size:";
cin >> b;

  double merg[b];
double a=0.00;

for(int i=0; i<b;i++){

cin >> merg[i];
cout << endl;
}
for(int j=0; j<b; j++){

a+=merg[j];

}
double c=a/b;
cout << c;
    return 0;
    
}