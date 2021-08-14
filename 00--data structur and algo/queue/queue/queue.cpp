// queue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout;
class queue {
private:
    struct node {
        int val;
        node* next;
    };
        node* rear;
        node* front;
public:
    queue();
    void enqueue(int );
    void dequeue();
    void readme(node*);
    void printqueue();
    ~queue();
};


queue::queue()
{
    front = NULL;
    rear = NULL;
}

void queue::enqueue(int el)
{
    node* n = new node;
    n->val = el;
    n->next = NULL;
    if (front == NULL && rear == NULL) {
        rear = n;
        front = rear;
    }
    else {
        front->next = n;
        front = n;

    }
}

void queue::dequeue()
{
    node* del = new node;

    if (front == NULL && rear == NULL) {
        std::cout << "the queue is empty";
    }
    else {
        del = rear;
        rear = rear->next;
        delete del;
    }
}

void queue::readme(node* r)
{
    std::cout << "-------------------" << "\n";
    std::cout << r->val << "\n";
    std::cout << "-------------------" << "\n";

}

void queue::printqueue()
{
    node* p = rear;
    //p->next = rear ->next;
    while (p!=NULL)
    {
        readme(p);
        p =p->next;

    }
}

queue::~queue()
{
}

int main()
{
    queue k;
    k.enqueue(1);
    k.enqueue(2);
    k.enqueue(3);
    k.enqueue(4);
    k.enqueue(5);
    k.enqueue(6);
    k.enqueue(7);
    k.dequeue();
    k.printqueue();

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

