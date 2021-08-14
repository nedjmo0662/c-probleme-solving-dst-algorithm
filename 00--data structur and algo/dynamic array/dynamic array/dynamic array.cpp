// dynamic array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout;

class dynamicArr {
private:  
    int cap;

    int* arr;

    int numofe;

    void intialize(int from) {
        for (int i = from; i < cap; i++) {
            arr[i] = 0;

        }
    }
    
    void expended() {
        cap *= 2;
        int* tempArr = new int[cap];
        for (int i = 0; i < cap; i++) {
            tempArr[i] = arr[i];
        }
        delete[] arr;
        arr = tempArr;
        intialize(numofe);
    }

public:
    dynamicArr() {
        cap = 1;
        numofe = 0;
         arr = new int[cap];
    }

    ~dynamicArr() {
        delete[] arr; 
    }

    void add(int el) {
        if (numofe >= cap) {
            expended();
        }

        arr[numofe++] = el;

    }
    int getat(int index) {
        if (index < 0 || index >= numofe) {
            throw("out of bounds exception!");
        }
        return arr[index];
    }

    void popback() {
        if (numofe > 0) {
            arr[--numofe] = 0;
        }
        else {
            throw( "array is empety");
        }

    }
    int getsize() {
        if (numofe > 0)
            return numofe;
    }
    int getcap() {
        if (cap > 0) {
            return cap;
        }
    }
    void getptr() {
        int* ar = arr;
        cout << ar << "\n";
    }

    void getptr(int n) {
        int* ar = &arr[n];
        cout << ar << "\n";
    }
};

int main()
{

    dynamicArr l;
    l.add(1);
    l.add(2);
    l.add(3);
    l.add(4);
    l.add(5);
    l.getptr();
    l.getptr(0);
    l.getptr(1);
    l.getptr(2);
    l.getptr(3);



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
