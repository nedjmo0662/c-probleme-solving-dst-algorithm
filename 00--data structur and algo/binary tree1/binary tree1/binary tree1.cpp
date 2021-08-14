// binary tree1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

class tree {
private:
    struct node {
        int value;
        node* left;
        node* right;
    };
    node* root;
public:
    tree();
    void add(int val);
    void search(int val);
    void invert(node*);
    void invert_tree();
    void print_l();
    void print_rl(node*);
    void print_r();
    void print_lr(node*);

};

tree::tree()
{
    root = new node;
    root->value = 5;
    root->left = NULL;
    root->right = NULL;
}

void tree::add(int val) {
    node* ptr = root;
    node* f = root;
    node* n = new node;
    n->value = val;
    n->left = NULL;
    n->right = NULL;


    if (val == root->value) {
        root = n;
    }
    else if (val > root->value && root->right == NULL) {
        root->right = n;
        // f = ptr->right;
    }
    else if (val < root->value && root->left == NULL)
    {
        root->left = n;
        // f = ptr->left;
    }
    else {

        while (f != NULL) {

            if (val < ptr->value && ptr->left != NULL) {
                ptr = ptr->left;
                ptr->right != NULL ? f = ptr->right: f=ptr->left;
            }
            
             else if (val > ptr->value && ptr->right != NULL) {
                ptr = ptr->right;
                ptr->left != NULL ? f = ptr->left : f=ptr->right;
            }

        }
        if (val < ptr->value) {
            ptr->left = n;
        }

        else {
            ptr->right= n;

        }

    }

}

void tree::print_rl(node* r) {
    r = r->right;
    while (r != NULL) {
        std::cout << "right of : " << r->value << "\n";
        r = r->right;
    }
}

void tree::print_l()
{
    node* ptr = root;
    node* ttr = root->left;
    node* str;
    std::cout << "root : " << ptr->value << "\n";

    while (ttr != NULL) { 
        std::cout << "left : " << ttr->value << "\n";
        print_rl(ttr);
        ttr = ttr->left;
    }
}

void tree::print_lr(node* l) {
    l = l->left;
    while (l != NULL) {
        std::cout << "right of : " << l->value << "\n";
        l = l->right;
    }
}

void tree::print_r()
{
    node* ptr = root;
    node* ttr = root->right;
    node* str;
    std::cout << "root : " << ptr->value << "\n";

    while (ttr != NULL) {
        std::cout << "right : " << ttr->value << "\n";
        print_lr(ttr);
        ttr = ttr->right;
    }
}

void tree::search(int val) {
    node* ptr = root;
    bool found = false;
    int count = 0;
    while (!found) {
        if (val == ptr->value) {
            std::cout << val << " is found in the tree \n";
            std::cout << "found in " << count << " time\n";
            found = true;
            break;
        }
        else if (val > ptr->value && ptr->right != NULL) {
            ptr = ptr->right;
            count++;
        }
        else if (val < ptr->value && ptr->left != NULL) {
            ptr = ptr->left;
            count++;

        }
      
        else {
            std::cout << val << " is not found \n";
            break;
        }
    }

}

void tree::invert(node* a) {

    if (a) {
                node* right = a->right;
                node* left =a->left;
                a->left = right;
                a->right = left;
                invert(a->left);
                invert(a->right);
    }

}

//void tree::invert_tree() {
//    node* ptr = root;
//    node* right = ptr->right;
//    node* left = ptr->left;
//    invert(root);


    /*int a = 0;
    while (ptr != NULL) {
        str = ptr->left;
        ptr->left = ptr->right;
        ptr->right = str;
        ptr = ptr->right;
        if (ptr == NULL && a == 0) {
            ptr = str->left;
            a = 1;
        }

    }*/

    void tree::invert_tree() {
            node* ptr = root;
            invert(ptr);
    }
 

//
//void tree::add(int val)
//{
//    node* n = new node;
//    n->value = val;
//    n->left = NULL;
//    n->right = NULL;
//    node* ptr = root;
//    node* next = root;
//    if (val == root->value) {
//        root = n;
//    }
//    else if (val > root->value && root->right == NULL) {
//        root->right = n;
//    }
//    else if (val < root->value && root->left == NULL) {
//        root->left = n;
//    }
//    else {
//        while (next != NULL) {
//
//            if (val < ptr->value && ptr->left != NULL) {
//                ptr = ptr->left;
//                //ptr != NULL ?ptr->left: ptr->right;
//                next = ptr;
//            }
//            else if (val > ptr->value && ptr->right != NULL) {
//                ptr = ptr->right;
//                next = ptr;
//            }   
//            
//        }
//
//        if (val > ptr->value) {
//         ptr->right= n;
//        }
//        else {
//          ptr->left= n;
//        }
//    }
//}
//void tree::search(int val)
//{
//    int ans = 0;
//    bool found = true;
//    node* ptr = root;
//    while (found) {
//        if (val == ptr->value) {
//            
//            std::cout << val << " found \n";
//            found = false;
//        }
//        else if (val > ptr->value && ptr->right != NULL) {
//            ptr = ptr->right;
//            ans++;
//        }
//        else if (val < ptr->value && ptr->left != NULL) {
//            ptr = ptr->left;
//            ans++;
//        }
//        else {
//            std::cout << val << " not found \n";
//            break;
//        }
//    }
//    //std::cout << val << " :" << ans << "\n";
//    
//}
//
//void tree::invert(node* ptr)
//{
//    if (ptr) {
//        node* right = ptr->right;
//        node* left = ptr->left;
//        ptr->left = right;
//        ptr->right = left;
//        invert(ptr->left);
//        invert(ptr->right);
//    }
//    
//}
//void tree::invert_tree()
//{
//    node* ptr = root;
//    invert(ptr);
//}
//
//void tree::print_l() {
//
//    node* l = root->left;
//    
//    while (l != NULL) {
//        std::cout << "\nleft " << l->value << "\n";
//        print_rl (l);
//        l= l->left;
//    }
//  
//}
//
//void tree::print_rl(node* r) {
//    r = r->right;
//    while (r != NULL) {
//        std::cout << "\nright " << r->value;
//        r = r->right;
//    }
//}
//
//void tree::print_r() {
//
//        node* l = root->right;
//
//        while (l != NULL) {
//            std::cout << "\nright " << l->value << "\n";
//            print_lr (l);
//            l = l->right;
//        }
//
//    }
//
//    void tree::print_lr(node * r) {
//        r = r->left;
//        while (r != NULL) {
//            std::cout << "\nleft " << r->value;
//            r = r->left;
//        }
//
//}

int main()
{
 /*   std::cout << "hello ";*/
    tree t;
    t.add(1);
    t.add(3);
    t.add(2);
    t.add(7);
     t.add(9);
    // t.add(6);
     /*  t.add(0); */

 t.invert_tree();
    t.search(3);
    t.print_l();
    t.print_r();
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
