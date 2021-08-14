// binary search.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//
#include<iostream>

//using namespace std;

void solve(int t){
    
    for (int i = 0; i < t; i++) {
        int n ;
        std::cin >> n;
        int a = n;
        int b = 0;
        while ((a+b) == n) {
            a--;
            b++;
        }
    }
}

bool is_border(int ar) {

    bool is = false;
        if (ar == 1 ) {
            is = true;

    }
    return is;
    
}

int main()
{
   
    int ar[4][4] = { {1,0,0,0},{1,1,0,0},{0,0,1,0},{0,0,0,0} };

    for (int i=0; i<4; i++){
        for (int j = 0; j < 4; j++) {
            if (ar[0][j]==1|| ar[j][0]== 1 || ar[j][3] == 1 || ar[3][j] == 1) {
                ar[0][j] == 0;
            }
        }
    }
    ar[0][0] == 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << ar[i][j];
        }
        std::cout << "\n";
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
