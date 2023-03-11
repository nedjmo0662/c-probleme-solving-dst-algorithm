#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main()
{
string hex;
int size;
cin >> hex;
size=hex.size();
int len =(size-1);
int dec,t=0;
for(int i=0; i<=len; i++){
if(hex[i]=='1'){
dec=1;
}
else if(hex[i]=='2'){
dec=2;
}
else if(hex[i]=='3'){
dec=3;
}
else if(hex[i]=='4'){
dec=4;
}
else if(hex[i]=='5'){
dec=5;
}
else if(hex[i]=='6'){
dec=6;
}
else if(hex[i]=='7'){
dec=7;
}
else if(hex[i]=='8'){
dec=8;
}
else if(hex[i]=='9'){
dec=9;
}
else if(hex[i]=='A'||hex[i]=='a'){
dec=10;
}
else if(hex[i]=='b'||hex[i]=='B'){
dec=11;
}
else if(hex[i]=='c'||hex[i]=='C'){
dec=12;
}
else if(hex[i]=='d'||hex[i]=='D'){
dec=13;
}
else if(hex[i]=='e'||hex[i]=='E'){
dec=14;
}
else if(hex[i]=='f'||hex[i]=='F'){
dec=15;
}
t=t+dec*pow(16,(size-1));
size--;
}
cout << "hex : "<<t;
    return 0;
}