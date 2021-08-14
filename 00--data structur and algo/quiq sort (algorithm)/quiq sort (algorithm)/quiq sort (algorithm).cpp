// quiq sort (algorithm).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;
int partition(int ar[], int s, int e)
{
    int pivot = ar[e];
    int pindex = s;
    for (int i = s; i < e; i++)
    {
        if (ar[i] <= ar[pindex])
        {
            swap(ar[i], ar[pindex]);
        }
    }
    swap(ar[e], ar[pindex]);
    return pindex;
}

void quiqsort(int ar[], int s, int e)
{
    if (s < e)
    {
        int p = partition(ar, s ,e);
        quiqsort(ar, s, (p - 1));
        quiqsort(ar, (p + 1), e );
    }
}
int primeCount(long n) {
    int pri[16] = { 2 ,3 ,5 ,7 ,11 , 13 , 17 , 19 , 23 , 29 , 31 , 37 , 41 , 43 , 47,53 };
    int count = 0, m = 1;
    while (m <= n && count < 16)
    {
        m *= pri[count];
        count++;
    }
    return count-1;
}
int main()
{



    int ar[5] = { 54, 4,3,2,1 };
    quiqsort(ar, 0, 4);
    for (int i = 0; i < 5; i++) {
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
