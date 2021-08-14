#include <iostream>

void merge(int arr[], int l, int r,int m) {
    int i = l, j = m + 1, k = l;
    int size = (r-l)+1;
  //  std::cout << "size : "<< size << "\n";
    int* temp = new int[size];

    while (i <= m && j <= r) {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
        while (i <= m)
        {
            temp[k] = arr[i];
            i++;
            k++;
        }

        while (j <= r)
        {
            temp[k] = arr[j];
            j++;
            k++;
        }

        for (int i = l; i <= r; i++)
        {
            arr[i] = temp[i];

        }
}


void mergesort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergesort(arr, l, m);
        mergesort(arr, (m + 1) , r);
        merge(arr, l, r, m);
    }

}
int main()
{

    int size;
    std::cout << "enter the arr size : ";
    std::cin >> size;

    int *ar= new int[size];

    std::cout << "enter ar el : ";
    for (int i = 0; i < size; i++) {
        std::cin >> ar[i];
    }
    mergesort(ar, 0, (size - 1));

    std::cout << "after merge sorting :\n";
    for (int i = 0; i < size; i++) {
        std::cout << ar[i] << " ";
    }

    return 0;
}
