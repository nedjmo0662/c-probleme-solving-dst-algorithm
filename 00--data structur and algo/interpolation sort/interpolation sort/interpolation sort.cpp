// interpolation sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int interpolation_sort(int a[], int n, int e) {
    int end, start, pos;
    end = n - 1;
    start = 0;
    while (start <= end && e >= a[start] && e <= a[end]) {
        pos = start + ((double)(start - end) / (a[end] - a[start])*(e - a[start]));
        if (e = a[pos]) {
            return pos;
        }
        else if (a[pos] < e) {
         start = pos + 1;
        }
        else if (a[pos] > e) {
            end = pos - 1;
        }
        return -1;
    }

}
int main()
{
   
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
