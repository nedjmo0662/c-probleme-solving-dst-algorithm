#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>
#include <map>
using namespace std;

int main()
{
int d=0;
string dna;
cin >> dna;
for(int i =0;i<dna.size();i++){
if(dna[i]!='A'&& dna[i]!='C'&& dna[i]!='T'&& dna[i]!='G'){
d++;
}
}
if(d!=0)
{
cout << "error";
}
else {
cout << dna.size();
}

return 0;
}