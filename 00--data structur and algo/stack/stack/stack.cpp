// stack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

//class stack {
//private:
//	struct item
//	{
//		string name;
//		int val;
//		item* prev;
//	};
//
//	item* stackptr;
//public:
//	stack();
//	void push(int val, string name);
//	void readitem(item* r);
//	void pop();
//	void print();
//	~stack();
//};
//stack::stack()
//{
//	stackptr = NULL;
//
//}
//void stack::push(int val, string name)
//{
//	item* n = new item;
//	n->name = name;
//	n->val = val;
//
//	if (stackptr == NULL) {
//		stackptr = n;
//		stackptr->prev = NULL;
//	}
//	else {
//		n->prev = stackptr;
//		stackptr = n;
//
//	}
//}
//
//void stack::readitem(item* r)
//{
//	cout << "------------------\n";
//	cout << "name " << r->name << endl;
//	cout << "value " << r->val << endl;
//	cout << "------------------\n";
//	cout << "       |         \n";
//	cout << "       |         \n";
//}
//
//void stack::pop()
//{
//	if (stackptr == NULL) {
//		cout << "there is no item to delete" << endl;
//	}
//	else {
//	
//		item* p = stackptr;
//		stackptr = p->prev;
//		p->prev = NULL;
//
//		delete p;
//	}
//
//}
//
//void stack::print()
//{
//	item* m = stackptr;
//
//	if (m == NULL) {
//		cout << "the stack is empty";
//	}
//	else {
//		while (m !=  NULL) {
//			readitem(m);
//			m = m->prev;
//		}
//	}
//}
//stack::~stack() {
//	
//}

class stack {
private:
	typedef struct item
	{
		int val;
		item* prev;
	}* stackptr;

	stackptr top;

public:
	stack();
	void push(int );
	void pop();
	void readitem(stackptr );
	void printstack();
	~stack();
};

stack::stack()
{
	top = NULL;
}

void stack::push(int el)
{
	stackptr n = new item;
	n->prev = NULL;
	n->val = el;

   if (top == NULL) {
		top = n;
		top->prev = NULL;
   }
   else {
	   n->prev = top;
	   top=n;
   }


}
 
void stack::pop()
{
	stackptr del = new item;
	del = top;
	if (top == NULL) {
		throw ("the stack is empty");
	}
	else {

		top = top ->prev;
		del->prev = NULL;
		delete del;

	}
}

void stack::readitem(stackptr r)
{
	cout << "-------------\n";
	cout << r->val << "\n";
	cout << "-------------\n";

}

void stack::printstack()
{
	stackptr read = top;

	if (read== NULL) {
		cout << "no stack\n ";
	}
	else {
		while (read != NULL) {
			readitem(read);
			read = read->prev;
		}
	}
}
stack::~stack()
{
	stackptr p1;
	stackptr p2;
	p1 = top;
	while (p1 != NULL) {
		p2 = p1;
		p1 = p1->prev;
		p2->prev = NULL;
		delete p2;
	
	}

}
int main()
{
	stack k;
	k.push(1);
	k.push(2);
	k.push(3);
	k.push(4);
	k.push(5);
	k.pop();
	k.printstack();

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


