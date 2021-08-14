//hash table.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

class hash {
private:
    static const int tablesize = 4;
    struct item {
        int phone;
        std::string name;
        item* next;
    };

    item* hashtable[tablesize];

public:
    hash();
    int Hash(std::string key);
    void add(std::string name, int phone);
    void remove(std::string name);
    void search(std::string key);
    void print();
    void printindex(int);

};

hash::hash() {
    for (int i = 0; i < tablesize; i++) {
        hashtable[i] = new item;

        hashtable[i]->name = "empty";
        hashtable[i]->phone = 00;
        hashtable[i]->next = NULL;
    }

}

int hash::Hash(std::string key) {

    int index = 0;
    int hax = 0;
    int tablesize;
    for (int i = 0; i < key.size(); i++) {
        hax += (int)key[i];
    }
    index = hax % 4;
    return index;

}

void hash::add(std::string name, int phone) {
    int index = Hash(name);
    if (hashtable[index]->name == "empty") {
        hashtable[index]->name = name;
        hashtable[index]->phone = phone;
        hashtable[index]->next = NULL;
    }
    else {
        item* p = hashtable[index];
        item* n = new item;
        n->name = name;
        n->phone = phone;
        n->next = NULL;

        while (p->next != NULL) {
            p = p->next;
        }
        p->next = n;

    }

}

void hash::remove(std::string name) {
    int index = Hash(name);
    item* d;
    item* p;
    item* p0;

    if (hashtable[index]->name == "empty") {
        std::cout << "there's no item to delete\n";
    }
    else if (hashtable[index]->name == name && hashtable[index]->next == NULL) {
        hashtable[index]->name = "empty";
        hashtable[index]->phone = 00;
        hashtable[index]->next = NULL;
        std::cout << name << " was removed from the hashtable \n";
    }
    else if (hashtable[index]->name == name && hashtable[index]->next != NULL) {
        d = hashtable[index];
        hashtable[index] = hashtable[index]->next;
        delete d;
        std::cout << name << " was removed from the hashtable \n";
    }
    else {
        p = hashtable[index];
        p0 = hashtable[index]->next;
        while (p->name != name && p != NULL)
        {
            p0 = p;
            p = p->next;
        }
        if (p == NULL) {
            std::cout << name << " was not found in the hashtable \n";
        }
        else {
            d = p;
            p = p->next;
            p0->next = p;
            delete d;
            std::cout << name << " was removed from the hashtable \n";

        }



    }

}

void hash::print() {
    for (int i = 0; i < tablesize; i++) {
        std::cout << "|| INDEX  " << i + 1 << " INDEX  ||\n";
        item* k = hashtable[i];
        while (k!= NULL) {
            std::cout << k->name<<"\n";
            std::cout << k->phone<<"\n";
            k = k->next;
        }
        std::cout << "||END OF INDEX  " << i + 1 << "  END OF INDEX  ||\n\n\n";

    }



}

void hash::search(std::string key) {
    int index = Hash(key);
    item* h = hashtable[index];
    while (h->name != key && h != NULL) {
        h = h->next;
    }
    if (h == NULL) {
        std::cout << key << " not found in hashtabel\n";
    }
    else {
        std::cout << key << " is found in hashtabel\n";

    }


}
//hash::hash()
//{
//    for (int i = 0; i < tablesize; i++) {
//        hashtable[i] = new item;
//        hashtable[i]->name = "empety";
//        hashtable[i]->phone = "empety";
//        hashtable[i]->next = NULL;
//    }
//}
//
//int hash::Hash(std::string key)
//{
//    int hash = 0;
//    int index;
//    for (int i = 0; i < key.length(); i++)
//    {
//        hash +=(int) key[i];
//    }
//    index = hash % tablesize;
//
//    return index;
//}
//
//void hash::add (std::string name,std::string phone )
//{
//     int index = Hash(name); 
//
//    if (hashtable[index]->name ==  "empety") {
//        hashtable[index]->name = name;
//        hashtable[index]->phone = phone;
//    }
//    else {
//        item* n = new item;
//        item* ptr = hashtable[index];
//
//        n->name = name;
//        n->phone = phone;
//        n->next = NULL;
//        while (ptr->next != NULL) {
//            ptr = ptr -> next;
//        }
//        ptr->next = n;
//    }
//}
//
//void hash::remove(std::string name)
//{
//    int index = Hash(name);
//    item* del;
//    item* f1;
//    item* f2;
//    //case 0
//    if (hashtable[index]->name == "empety" && hashtable[index]->phone == "empety") {
//        std::cout << name<< " was not faund in hashtable \n";
//    }
//    //case 1
//    else if (hashtable[index]->name == name && hashtable[index]->next == NULL) {
//        hashtable[index]->name = "empty";
//        hashtable[index]->phone = "empty";
//        std::cout << name << " was removed from the hashtable \n";
//
//    }
//    //case 2
//    else if (hashtable[index]->name == name && hashtable[index]->next != NULL) {
//        del = hashtable[index];
//        hashtable[index] = hashtable[index]->next;
//       
//        delete del;
//        std::cout << name << " was removed from the hashtable \n";
//    }
//    //case  3
//    else {
//        
//         f1 = hashtable[index];
//         f2 = hashtable[index]->next;
//
//        while (f1->name != name && f1 != NULL) {
//            f2 = f1;
//            f1 = f1->next;
//        }
//
//        if (f1 == NULL) {
//            std::cout << name << " was not faund in hashtable \n";
//
//        }
//
//        else {
//            del = f1;
//            f1= f1->next;
//            f2->next = f1;
//            
//            delete del;
//            std::cout << name << " was removed from the hashtable \n";
//
//        }
//
//    }
//}
//void hash::print()
//{
//    int index = 0;
//    item* p = hashtable[index];
//
//    while (index < tablesize) {
//        std::cout << "-----------------------\n";
//     std::cout << "index :" << index << "\n name :" << p->name << "\n phone : " << p->phone << "\n";
//     std::cout << "-----------------------\n";
//
//     p = p->next;
//     index++;
//     p = hashtable[index];
//        
//    }
//    std::cout << "\n";
//}
//void hash::printindex(int index)
//{
//    item* p= hashtable[index];
//
//    while (p!=NULL) {
//        std::cout << "-----------------------\n";
//        std::cout << "index :" << index << "\n name :" << p->name << "\n phone : " << p->phone << "\n";
//        std::cout << "-----------------------\n";
//
//        p = p->next;
//    }
//    std::cout << "\n";
//}
//void hash::search (std::string key)
//{
//    int index=Hash(key);
//
//    if (hashtable[index]->name == "empety") {
//        std::cout << "there is no such name as :" << key << "\n";
//
//    }
//    
//    else {
//           item* p = hashtable[index];
//
//            while (p->name != key && p->next != NULL) {
//                p = p->next;
//            }
//
//            if (p->next==NULL) {
//                std::cout << "there is no such name as :" << key << "\n";
//            }
//            else {
//                std::cout << "name :" << p->name << " | phone : " << p->phone << "\n";
//
//            }
//        }
//}


//nedjmo---------------------------------------------------nedjmo//

//hash::hash()
//{
//    for (int i = 0; i < tablesize; i++) {
//        hashtable[i] = new item;
//        hashtable[i]->name = "empety";
//        hashtable[i]->phone = 00;
//        hashtable[i]->next = NULL;
//
//    }
//}
//
//int hash::Hash(std::string key)
//{
//    int ind=0;
//    for (int i = 0; i < key.length(); i++) {
//        ind += (int)key[i];
//    }
//    int index = ind % tablesize;
//
//    return index;
//}
//
//void hash::add(std::string name, int phone)
//{
//
//    int index = Hash(name);
//    if (hashtable[index]->name == "empety") {
//        hashtable[index]->name = name;
//        hashtable[index]->phone = phone;
//    }
//    else {
//        item* n = new item;
//        item* ptr = hashtable[index];
//        n->name = name;
//        n->phone = phone;
//        n->next = NULL;
//
//        while (ptr->next != NULL) {
//            ptr = ptr->next;
//        }
//        ptr->next = n;
//
//    }
//}
//
//void hash::remove(std::string key)
//{
//    int index = Hash(key);
//    if (hashtable[index]->name == "empety") {
//        std::cout << key << " was not found \n";
//    }
//    else if (hashtable[index]->name ==key && hashtable[index]->next == NULL) {
//        hashtable[index]->name = "empety";
//        hashtable[index]->phone = 00;
//        std::cout << key << " removed\n";
//
//
//    }
//    else if (hashtable[index]->name == key && hashtable[index]->next != NULL) {
//        item* del=hashtable[index];
//        hashtable[index] = hashtable[index]->next;
//        del->next = NULL;
//        delete del;
//        std::cout << key << " removed\n";
//
//    }
//    else {
//        item* del;
//        item* n1 = hashtable[index];
//        item* n2 = n1;
//        while (n1->name != key && n1 != NULL) {
//            n2 = n1;
//            n1 = n1->next;
//        }
//        if (n1 == NULL) {
//            std::cout << key << " not found \n";
//        }
//        else {
//            del = n1;
//            n2->next = n1->next;
//            del->next = NULL;
//            delete del;
//            std::cout << key << " removed\n";
//        }
//    }
//}
//
//void hash::search(std::string key)
//{
//}
//
//void hash::print()
//{
//    int index = 0;
//    item* ptr = hashtable[index];
//           while (index < tablesize) {
//               std::cout << "|| " << index + 1 << " ||\n";
//           while (ptr->next != NULL) {
//            std::cout << "---------------" << "\n";
//            std::cout << ptr->name << "\n";
//            std::cout << ptr->phone << "\n";
//            std::cout << "---------------" << "\n \n";
//            ptr = ptr->next;
//        }
//        index++;
//        item* ptr = hashtable[index];
//    }
//}
//
//void hash::printindex(int)
//{
//}





int main()
{

    hash h;
 
    h.add("nedjmo", 0662);
    h.add("endjmo", 6467);
    h.add("ndjmoe", 658);

    h.add("nedjmao", 00220);
    h.add("endjmoa", 01000);
    h.add("ndjmoea", 00100);

    h.print();

    //while (c != "ex") {

    //    std::cout << "remove ";
    //    std::cin >> c;
    //    if (c != "ex") {
    //        h.remove(c);
    //    }
    //}
    //h.print();

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