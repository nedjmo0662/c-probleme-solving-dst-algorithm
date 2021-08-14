// heap sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void heapify(int arr[],int i, int s )
{
    int l = (2 * i) + 1;
    int r = (2 * i) + 2;

    int smallest = i;
    if (l < s && arr[l] < arr[i])
        smallest = l;
    if (r < s && arr[r] < arr[smallest])
        smallest = r;

    if (smallest != i)
    {
        swap(arr[i], arr[smallest]);
        heapify(arr, smallest, s);
    }
}

int extract(int ar[],  int &s) {
    if (s == 0)
        return INT_MIN;
    if (s == 1) {
        s--;
    return  ar[0];
    }
    int root = ar[0];
    ar[0] = ar[s - 1];
    s--;
   // cout << "root : " << root << endl;
    heapify(ar, 0, s);
    return root;
}

void heapsort(int ar[],int s) {
   
    int* temp= new int[s];
    int size = s;
    for (int i = (s / 2 - 1); i >= 0; i--)
    {
        heapify(ar, i, 7);
    }

    for (int k = 0; k < 7; k++)
    {
        temp[k]=extract(ar, size);
    }

    for (int k =0; k < s; k++)
    {
        ar[k] = temp[k];
    }
}
int main()
{
    int ar[7] = { 6565 ,858,8,9,4,949,32};

    heapsort(ar, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << ar[i] << " ";
    }
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
