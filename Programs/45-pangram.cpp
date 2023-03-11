#include<iostream>
#include <math.h>
using namespace std;

int main()
{

string word;
int c=0,a=0;
//char b[54];
getline (cin,word);

for(int i=0; i<word.length(); i++){

//if(word[i]!=char(k)){
//char(k)=word[i];

//b[i]=word[i];
a++;
//}

/*if(word[i]==' '){
a--;

}*/

//else{
for(int j=0; j<i; j++){

if(word[i]==word[j]||word[i]==' '){
c--;


//}
}
}

if(c<0){
a--;
}

c=0;


}

cout << a<<endl;
if(a==26){
cout << "panagram";

}
else {
cout << "not panagram";
}
return 0;
}