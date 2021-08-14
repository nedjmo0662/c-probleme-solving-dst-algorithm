 #include<iostream>

 using namespace std;

 int main(){

 for(int i=0 ; i<5; i++){

    for(int j=0; j<7; j++){

    if(i<3&&i==j || i<3 && i+j==4 || i>=3 && j==2){
        cout<< "Y";
    }
        else{
            cout<< " ";
        }

    }
    cout << endl;

   }

   return 0;
 }
