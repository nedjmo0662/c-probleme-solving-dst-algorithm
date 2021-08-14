// linked.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class list {
private:
    typedef struct node {
        int data;
        node* next;
    }* nodeptr;
    nodeptr h;
    nodeptr t;
    nodeptr c;

public:
    list();
    void addnode(int el);
    void delnode(int delel);
    void printlist();

};

list::list() {
    nodeptr h = NULL;
    nodeptr t = NULL;
    nodeptr c = NULL;
}

void list:: addnode(int el) {
    nodeptr n = new node;
    n->data = el;
    n->next = NULL;
    if (h != NULL) {
        c = h;
    while (c->next != NULL) {

            c = c->next;
        }
        c->next = n;
    }
    else {
        h = n;
    }

}

void list::delnode(int delel)
{
    nodeptr delptr = NULL;
    t = h;
    c = h;
    while (c->data != delel && c!=NULL ) {
        t = c;
        c = c->next;
    }
    if (c == NULL) {
        cout << " is not existing" << endl;
        delete delptr;

    }
    else {
        delptr = c;
        c = c->next;
        t->next = c;
        delete delptr;
    }
    
}

void list::printlist()
{
    c = h;
    while (c != NULL) {
        cout << c->data << endl;
        c = c->next;
    }
}




int main()
{ 

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
