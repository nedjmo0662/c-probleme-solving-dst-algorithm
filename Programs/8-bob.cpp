#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
string me;
for(int i =0;i<100;i++){
cin >> me;
//scanf("%s ",&me);
if( me[me.length()-1]=='?')
{
cout<<"i'm not sure\n";
}
else if(me[i]=='A'&&me[i]=='B'&&me[i]=='c'&&me[i]=='D'&&me[i]=='E'&&me[i]=='F'&&me[i]=='G'&&me[i]=='H'&&me[i]=='I'&&me[i]=='J'&&me[i]=='K'&&me[i]=='L'&&me[i]=='M'&&me[i]=='N'&&me[i]=='O'&&me[i]=='P'&&me[i]=='Q'&&me[i]=='R'&&me[i]=='S'&&me[i]=='T'&&me[i]=='U'&&me[i]=='V'&&me[i]=='W'&&me[i]=='X'&&me[i]=='Y'&&me[i]=='Z')
{

cout << "calm down\n";

}
else if(me[i]=='A'&&me[i]=='B'&&me[i]=='c'&&me[i]=='D'&&me[i]=='E'&&me[i]=='F'&&me[i]=='G'&&me[i]=='H'&&me[i]=='I'&&me[i]=='J'&&me[i]=='K'&&me[i]=='L'&&me[i]=='M'&&me[i]=='N'&&me[i]=='O'&&me[i]=='P'&&me[i]=='Q'&&me[i]=='R'&&me[i]=='S'&&me[i]=='T'&&me[i]=='U'&&me[i]=='V'&&me[i]=='W'&&me[i]=='X'&&me[i]=='Y'&&me[i]=='Z'&&me[me.size()-1]=='?')
{
cout<<"calm down , i know what am doing\n";
}

else 
cout << "what ever\n";

}
return 0;
}