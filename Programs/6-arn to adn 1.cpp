#include<iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
string rna,dna;
bool non=false;
cout << "enter ur a dna string:";
cin >>dna;
cout << "the rna string :";
int x=(dna.size()-1);
for(int i=0; i<=x; i++){
if(dna[i]=='G'||dna[i]=='g'){
rna[i]='C';
//cout << rna[i];
}
else if(dna[i]=='C'||dna[i]=='c'){
rna[i]='G';
//cout << rna[i];
}
else if(dna[i]=='A'||dna[i]=='a'){
rna[i]='U';
//cout << rna[i];
}
else if(dna[i]=='T'||dna[i]=='t'){
rna[i]='A';
//cout << rna[i];
}
else{
non=true;
}
}
if(non ==true){
cout << "you must write the nucleus model";
}
else{
for(int c=0; c<=x; c++)
cout << rna[c];
}
return 0;
}