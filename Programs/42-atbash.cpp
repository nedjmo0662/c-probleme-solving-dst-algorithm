#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

int main()
{

    string atb,atb1;

    getline (cin,atb);

    for(int i=0; i<atb.length(); i++) {


        for(int j=0; j<26; j++) {

            if(atb[i]==char(65+j)) {

                atb1[i]=char(90-j);
            cout<<atb1[i];

            }
        }

    }
    
    
    
    return 0;
}