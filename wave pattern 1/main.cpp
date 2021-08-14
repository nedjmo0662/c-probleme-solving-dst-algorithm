#include <iostream>

using namespace std;

int main()
{
    /*int os=3;
    int is=0;
    for(int i=1; i<=4; i++){
        for (int j=1; j<=4; j++){
            for(int k=1; k<=os; k++){
                cout << " ";
            }
            cout << "*";

            for(int k=1; k<=is; k++){
                cout << " ";
            }
            if(i>1&&i<4){
                cout << "*";
            }
            else if(i==4&&j==4){
                cout << "*";
            }
            if(os>1){
            for(int k=1; k<=os; k+=2){
                cout << " ";
            }
            }
        }
        cout << endl;
        //os=(i==3)?0:os--;
        //is=(i==1)?1:is+=2;
        if(os==1){
            os=0;
        }
        else{
            os--;
        }
        if(is==0){
            is=1;
        }
        else{
            is+=2;
        }

    }*/

    int wave_height=4;
    int wl=4;
    int wh=wave_height-1;
    int x=wh;
    for(int i=0; i<=wh; i++){
        for(int j=0; j<=wh*wl*2; j++){
            if(j%(wh*2)==x || j%(wh*2)==wh+i){
                cout << "*";
            }
            else
                cout << " ";


        }
        x--;
        cout << endl;
    }

    return 0;
}
