// heap (data structure).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<math.h>

using namespace std;
class minheap {
private:
        int *harr;
        int capcity;
        int heap_size;

public:
        minheap(int cap);
        int parent(int i);
        int left(int i);
        int right(int i);
        void insertion(int val);
        int extractmin();
        void minheapify(int i);
        void linearsearch(int val);
        void printarray();
        void delelt(int i);
        void decrease(int i , int );
        int height();
        int getmin();
};


minheap::minheap(int cap)
{
    capcity = cap;
    heap_size = 0;

}

int minheap::parent(int i)
{
    int parent = (i - 1) / 2;
    return parent;
}

int minheap::left(int i)
{
    int left = (2 * i + 1) ;
    return left;
}

int minheap::right(int i)
{
    int right = (2 * i + 2) ;
    return right;
}

void minheap::insertion(int val)
{
    if (heap_size == capcity) {
        cout << "over fllow \n";
        return;
    }
    heap_size++;
    int i = heap_size - 1;
    harr[i] = val;
    while (i!=0 && harr[parent(i)]>harr[i])
    {
        swap(harr[parent(i)], harr[i]);
        i = parent(i);
    }




}

int minheap::extractmin()
{
    if (heap_size == 0) {
        return INT_MAX;
  }
    if (heap_size == 1) {
        heap_size--;
        return harr[0];
    }
    int root = harr[0];
    harr[0] = harr[heap_size - 1];
    heap_size--;
    minheapify(0);
    return root;


}

void minheap::minheapify(int i)
{
    int l = left(i);
    int r = right(i);
    int smallest = i;
    if (l < heap_size && harr[l] < harr[i]) {
        smallest = l;
    }
    if (r < heap_size && harr[r] < harr[smallest]) {
        smallest = r;
    }
    if (i != smallest) {
        swap(harr[i], harr[smallest]);
        minheapify(smallest);
    }


}

void minheap::linearsearch(int val)
{
    for (int i = 0; i < heap_size; i++) {
        if (harr[i] == val) {
            cout << val << " is found un heap \n";
        }

    }
}

void minheap::printarray()
{
    for (int i = 0; i < heap_size; i++) {
        
        cout << harr[i]<<"\n";

    }
}

void minheap::delelt(int i)
{
    decrease(i, INT_MAX);
    extractmin();
}

void minheap::decrease(int i, int MIN)
{
    harr[i] = MIN;
}

int minheap::height()
{
    return 0;
}

int minheap::getmin()
{
    return harr[0];
}


//
//class minheap {
//private:
//    int *harr;
//    int capcity;
//    int heap_size;
//public:
//    minheap(int cap);
//    int parent(int i);
//    int left(int i);
//    int right(int i);
//    void insertion(int val);
//    int extractmin();
//    void minheapify(int i);
//    void linearsearch(int val);
//    void printarray();
//    void delelt(int i);
//    void decrease(int i , int );
//    int height();
//    int getmin();
//};
//
//minheap::minheap(int cap)
//{
//    heap_size = 0;
//    capcity = cap;
//    harr = new int[cap];
//}
//int minheap::parent(int k)
//{
//    return ((k-1) / 2);
//}
//
//int minheap::left(int i)
//{
//    return (2*i)+1;
//}
//
//int minheap::right(int i)
//{
//    return (2*i)+2;
//}
//
//void minheap::insertion(int val)
//{
//    if (heap_size == capcity)
//    {
//        cout << "overflow : heap is full";
//        return;
//    }
//    heap_size++;
//    int i = heap_size - 1;
//    harr[i] = val;
//    while (i != 0 && harr[i] < harr[parent(i)]) {
//        swap(harr[i], harr[parent(i)]);
//        i = parent(i);
//    }
//}
//int minheap::extractmin()
//{
//    if(heap_size==0)
//        return INT_MAX;
//    if (heap_size == 1) {
//        heap_size--;
//        return harr[0];
//    }
//    int root = harr[0];
//    harr[0] = harr[heap_size - 1];
//    heap_size--;
//    minheapify(0);
//    return root;
//}
//void minheap::minheapify(int i)
//{
//    int r = right(i);
//    int l = left(i);
//    int smallest = i;
//    if (r < heap_size && harr[r] < harr[i])
//        smallest = r;
//    if (l < heap_size && harr[l] < harr[i])
//        smallest = l;
//    if(i != smallest)
//    {
//        swap(harr[smallest], harr[i]);
//        minheapify(smallest);
//    }
//}
//void minheap::linearsearch(int val)
//{
//    for (int i = 0; i < heap_size; i++)
//    {
//        if (harr[i] == val)
//        {
//            cout << "the value found";
//            return;
//        }
//        cout << "value not found!";
//    }
//}
//void minheap::printarray()
//{
//    for (int i = 0; i < heap_size; i++)
//    {
//        cout << harr[i] << " ";
//        cout << endl;
//    }
//}
//void minheap::delelt(int i)
//{
//    decrease(i, INT_MIN);
//    extractmin();
//}
//void minheap::decrease(int i, int newval)
//{
//    harr[i] = newval;
//    while (i != 0 && harr[parent(i)] > harr[i])
//    {
//        swap(harr[parent(i)], harr[i]N );
//        i = parent(i);
//    }
//
//}
//int minheap::height()
//{
//    return ceil(log2(heap_size + 1)) - 1;
//}
//int minheap::getmin()
//{
//    return harr[0];
//}

int main()
{
    //int s;
    //cout << "enter size of min heap" << endl;
    //cin >> s;
    //minheap h(s);
    //cout << "min heap created\n";

    //int option, val;


    //do
    //{
    //    cout << "what operation do you want to perform ? " 
    //         << "selct option num . enter 0 to exit.\n";
    //    cout << "1. insert key/node\n";
    //    cout << "2. search key/node\n";
    //    cout << "3. del key/node\n";
    //    cout << "4. get min\n";
    //    cout << "5. extract min\n";
    //    cout << "6. height of heap\n";
    //    cout << "7. print /traversal heap values\n";
    //    cout << "8. clear screen\n";
    //    cout << "0. exit program\n";

    //    cin >> option;
    //    switch (option) {
    //    case 0:
    //        break;
    //    case 1:
    //        cout << "insert a value in heap: ";
    //        cin >> val;
    //        h.insertion(val);
    //        cout << "\n";
    //        break;
    //    case 2:
    //        cout << "search for a value in heap: ";
    //        cin >> val;
    //        h.linearsearch(val);
    //        cout << "\n";
    //        break;
    //    case 3:
    //        cout << "delet a value in heap: ";
    //        cin >> val;
    //        //h.delet(val);
    //        cout << "\n";
    //        break;
    //    case 4:
    //        cout << "the minimum value in heap is : ";
    //        //h.getmin(val);
    //        cout << "\n";
    //        break;
    //    case 5:
    //        cout << "extracte the min value";
    //        h.extractmin();
    //        cout << "\n";
    //        break;
    //    case 6:
    //        cout << "the height of heap : ";
    //        //h.height();
    //        cout << "\n";
    //        break;
    //    case 7:
    //        cout << "the heap element(array): ";
    //        h.printarray();
    //        cout << "\n";
    //        break;
    //    case 8:
    //        system("cls");
    //        break;
    //    default:
    //        cout << "ENTER PROPER OPTION NUMBER \n";
    //        break;
    //    }
    //  

    //    } while (option != 0);

    minheap s(5);
    s.insertion(34);
    s.insertion(3);
    s.insertion(4);
    s.insertion(9);
    s.insertion(1);
    s.printarray();
    s.delelt(2);
    cout << "\n---------\n";
    s.printarray();

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
