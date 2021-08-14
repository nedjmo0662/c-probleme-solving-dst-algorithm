#include <iostream>

using namespace std;

int main()
{
    int wave_h=5;
    int wave_l=4;
    int wh=wave_h-1;
    int x=wh;
    int os=2;
    int is=0;
    int ch='a';
    int y=0;
    for(int i=0; i<=wh; i++){
        for(int j=0; j<=wave_l; j++){
           for (int k=1; k<=os; k++){
            cout << " ";
            y++;
           }
           cout << "0";
           for(int k=1; k<=is; k++){
            cout << " ";
            y++;
           }
           cout<< "0";
           for(int k=1; k<=os; k++){
            cout << " ";
            y++;
           }

    }
    cout << "\n";
    os=(i+1!=wh)?1:0;
    is=(i+1!=wh)?2:4;
    y=0;
    //is=0?1:is+=2;
}


    /* if(j%(wh*2)==x){
                cout <<"/";
            }
            else if(j%(wh*2)==wh+i || j%(wh*2)==x){
                cout << "\\";
            }
            else
                cout << " ";
        }*/
    return 0;
}
