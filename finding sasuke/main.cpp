#include <iostream>
#include<vector>

using namespace std;


void compare(vector <int> &v,vector <int>&v1 , int temp ,int t, int m ,int &b_value , int &x){

    for(int i=0; i< m; i++){
            if(v[i]!=temp)  x+=v[i];

            else{
                continue;
            }
    }

    while (x > b_value){
        v1[t]--;
        b_value=abs(v[t]*v1[t]);
    }
   //cout << x << "\n";
}
void solve(){
    int n;
    cin>>n;
    vector<int> v;
    vector<int> v1;

    for(int i=0; i<n; i++){
            int val;
            cin>>val;
        v.push_back(val);
    }
     int temp=0;
    for(int i=0; i<n; i++){

        if(v[i]>temp){
            temp=v[i];
        }
    }
    int t;
     for(int i=0; i<n; i++){
        if(v[i]==temp){
            v1.push_back(-1);
            t=i;
        }
        else{
            v1.push_back(1);
        }
    }
   //cout << temp << "\n";
    int b_value=abs(v[t]*v1[t]);
    int x=0;
    compare(v,v1,temp,t,n,b_value, x);

   // cout << "x = " << x << " b_value = " << b_value << "\n";

    int def=b_value-x;

    while(def>0){

            for(int i=0 ; i<n; i++){
                if((def-v[i])>= 0 ){
                  def=def-v[i];
                  v1[i]++;
            }
         }
    }

    for(int i=0; i<n; i++){
        cout << v1[i] << " ";
    }

}
int main()
{
    solve();

    return 0;
}
