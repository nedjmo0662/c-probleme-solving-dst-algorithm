#include <iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<stack>

using namespace std;

void drow(){
    char dr[9][3][3]={{{'1','2','3'},{'4','5','6'},{'7','8','9'}},{{'1','2','3'},{'4','5','6'},{'7','8','9'}},{{'1','2','3'},{'4','5','6'},{'7','8','9'}},
                      {{'1','2','3'},{'4','5','6'},{'7','8','9'}},{{'1','2','3'},{'4','5','6'},{'7','8','9'}},{{'1','2','3'},{'4','5','6'},{'7','8','9'}},
                      {{'1','2','3'},{'4','5','6'},{'7','8','9'}},{{'1','2','3'},{'4','5','6'},{'7','8','9'}},{{'1','2','3'},{'4','5','6'},{'7','8','9'}}};


    for(int i=0; i<9; i++){
            for(int j=0; j<3; j++){
                for(int k=0; k<3; k++){
                    cout  << "|" << dr[i][j][k] ;
                }
                cout << "|";
            }
          //
            if((i+1)%3==0 && i!=0 && i!=8 ){
                cout <<"\n---------------------\n";
            }
            else  {

                    cout << "\n";
            }
    }

}


void randomnize(){
   stack <int [] > s;

    srand((unsigned int ) std::time(nullptr));
    int x=0;
            for(int i=0; i<9; i++){
                 for(int j=0; j<3; j++){
                    for(int k=0; k<3; k++){
                        /* int rand = 1+ rand() % 8;
                          int ar[4];
                           ar[0]=rand;
                           ar[1]=i;
                           ar[2]=j;
                           ar[3]=k;
                           s.push(ar);
                           int arr[] =ar;
                           stack <int []> s1;
                           s1=s;
                           delete ar;
                           for(int x=0 ; x<s.size(); ++x){
                           if(s.top == arr){

                           }

                           }*/
                }
            }
        }
}

int main()
{
    //drow();
 /*   vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

     vector<int> v1;

    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4); */

    vector <tuple <int> > s1;
    stack <int > s2;

    int ar[3]={1,2,3};
    int ar1[3]={1,2,3};
    int ar2[3]={1,2,3};

    //s1.push();
    s1.push_back({1,3});
    s1.push_back({3,8});
    s1.push_back({6,7});


    cout << s1.front();

    return 0;
}
