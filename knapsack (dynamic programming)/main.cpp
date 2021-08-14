#include<iostream>
#include<conio.h>
using namespace std;
int matrix[100][100]={0};
int picks[100][100]={0};

int max(int , int );
int knapsack(int , int , int[],int[]);
void showpickeditems(int , int , int[]);
int main()
{
    string mk;
    while(mk!="ex"){
    cout << "???: ";
    cin>>mk;
    int n;
    int knapsacksize;
    int weights[50];
    int profits[50];

    int i;


    cout << "\n0/1 knapsack problem";
    cout << "\n\n enter num of obj: ";
    cin >> n;

    cout << "\nenter weights \n";
    for(i=0; i<n; i++){
        cout << "for object[" << (i+1) << "]:  ";
        cin >> weights[i];
    }

    cout << "\nenter profits :\n";

    for(i=0;i<n; i++)
    {
        cout << "for object[" << (i+1) << "]:  ";
        cin>>profits[i];
    }

    cout << "\nenter knapsack size: ";
    cin >> knapsacksize;

    cout << "max profits earned = "<< knapsack(n,knapsacksize,weights,profits)<< "\n";

    cout << "items picked : ";
    showpickeditems(n,knapsacksize,weights);
    }

    return 0;
}
int max(int a, int b){
    if(a>b){
        return a;
    }
    else
        return b;
}
void knapsack(int n,int size, int weights[] , int profits[]){
    int i,j;
    int v1,v2;

    for(i=0;i<n;i++){
        for(j=0; j<=size;j++){
            if(weights[i]<=j){
                v1=matrix[i][j];

                v2=profits[i]+matrix[i][j-weights[i]];

                matrix[i+1][j]=max(v1,v2);

                if(v2>v1)
                    picks[i+1][j]=1;
                else
                    picks[i+1][j]=-1;
            }
            else{
                picks[i+1][j]=-1;
                matrix[i+1][j]=matrix[i][j];
            }
        }
    }
    //return matrix[n][size];
    cout << " matrix : " << matrix[n][size]<< endl;
}
void showpickeditems(int item , int size , int weights[]){

    while(item > 0){
        if(picks[item][size]==1)
        {
            cout << "\n object [" << item << "]";
            item--;
            size -=weights[item];
        }
        else
        {
            item--;
        }
    }
    cout << "\n";
}
