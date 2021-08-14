// merge sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//void merge(int arr[], int l, int r,int m) {
//    int i = l, j = m + 1, k = l;
//    int size = (r-l) + 1;
//    int* temp = new int[size];
//    while (i <= m && j <= r) {
//        if (arr[i] <= arr[j])
//        {
//            temp[k] = arr[i];
//            i++;
//            k++;
//        }
//        else
//        {
//            temp[k] = arr[j];
//            j++;
//            k++;
//        }
//    }
//        while (i <= m)
//        {
//            temp[k] = arr[i];
//            i++;
//            k++;
//        }
//
//        while (j <= r)
//        {
//            temp[k] = arr[j];
//            j++;
//            k++;
//        }
//
//        for (int i = l; i <= r; i++)
//        {
//            arr[i] = temp[i];
//
//        }
//}
//
//
//void mergesort(int arr[], int l, int r)
//{
//    if (l < r)
//    {
//        int m = (l + r) / 2;
//        mergesort(arr, l, m);
//        mergesort(arr, m + 1, r);
//        merge(arr, l, r, m);
//    }
//
//}




int main()
{
    
   // int size;
   // std::cout << "enter the arr size : ";
   // std::cin >> size;
   // int *ar= new int[size];
   //// ar[size];
   // std::cout << "enter ar el : ";
   // for (int i = 0; i < size; i++) {
   //     std::cin >> ar[i];
   // }
   // mergesort(ar, 0, (size - 1));
   // std::cout << "after merge sorting :\n";
   // for (int i = 0; i < size; i++) {
   //     std::cout << ar[i] << " ";
   // }



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
