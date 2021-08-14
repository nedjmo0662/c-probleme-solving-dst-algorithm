// section sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void selectionsort(int arr[], int arrsize) {

    int minindex;

    for (int i = 0; i < arrsize; i++) {
        minindex = i;
    
        for (int j = i + 1; j < arrsize; j++) 
        {
            if (arr[j] < arr[minindex])
                minindex = j;
        }
            swap(arr[i], arr[minindex]);
        
    }

}
int main()
{
    cout << "selection sort \n";
    int arr[] = { 43,21,56,78,97,30 };
    int arrsize = sizeof(arr) / sizeof(*arr);
    cout << "initial array : ";
    for (int i = 0; i < arrsize; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    selectionsort(arr, arrsize);

    cout << "sorin arr : ";
    for (int i = 0; i < arrsize; i++) {
        cout << arr[i] << " ";
        
    }
    cout << "\n";

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
