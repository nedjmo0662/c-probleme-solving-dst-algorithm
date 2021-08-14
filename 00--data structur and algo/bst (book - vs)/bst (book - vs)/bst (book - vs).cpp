// bst (book - vs).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
class bstnode
{
public:
    int key;
    bstnode* right;
    bstnode* left;
    bstnode* parent;
};



class bst
{
private:
    bstnode* root;
protected:
    bstnode* insert(bstnode* node, int key);
    void printtreeinorder(bstnode* node);
    bstnode* search(bstnode* node, int key);
    //int height(bstnode*);
public:
    bst();
    bstnode* ro;
    int i = 1, l = 1, r = 1;
    int height(bstnode * r);
    void insert(int key);
    void printtreeinorder();
    void search(int key);
    void printbfs(bstnode*);
    void printgivenlevel(bstnode* , int );
    int depth(bstnode* r , int i , int &result);
};

bst::bst() {
    root = NULL;
    //bst* tree = new bst;
}

bstnode* bst::insert(bstnode* node, int key) {
    if (node == NULL)
    {
        node = new bstnode;
        node->key = key;
        node->left = NULL;
        node->right = NULL;
        node->parent = NULL;
    }
    else if (node->key < key)
    {
        node->right = insert(node->right, key);
        node->right->parent = node;
    }
    else
    {
        node->left = insert(node->left, key);
        node->left->parent = node;
    }
    return node;
}

void bst::insert(int key)
{
    root = insert(root, key);
    ro = root;
}

void bst::printtreeinorder(bstnode* node)
{
    if (node == NULL)
        return;

    printtreeinorder(node->left);

    std::cout << node->key << " ";

    printtreeinorder(node->right);


}
void bst::printtreeinorder()
{
    printtreeinorder(root);
    std::cout << std::endl;
}

bstnode* bst::search(bstnode* node, int key)
{
    if (node == NULL)
        return NULL;
    else if (node->key == key)
        return node;
    else if (node->key < key)
        return search(node->right, key);
    else
        return search(node->left, key);
}

//bool bst::search(int  key)
//{
//    bstnode* result = search(root, key);
//    return result == NULL ? false : true;
//}

void bst::search(int  key)
{
    bstnode* result = search(root, key);
     result == NULL ? cout << "not found" : cout << "found";
}

int bst::height(bstnode* r)
{

    if (r == NULL)
        return  -1;

    else
    {
        int lheight = height(r->left);
        int rheight = height(r->right);

        if (lheight > rheight)
            return (lheight + 1);
        else
            return (rheight + 1);
    }

}

void bst::printbfs(bstnode* r)
{
    
    int h = height(r);

    for (int i = 0; i <= h; i++) {
        printgivenlevel(r, i);
    }
}
void bst::printgivenlevel(bstnode* r , int i)
{
    if (r == NULL)
        return;
    else if (i == 0)
    {
        cout << r->key << " ";
    }
    else {
        printgivenlevel(r->left, i-1);
        printgivenlevel(r->right, i-1);
    }
}

int  bst::depth(bstnode* r , int i , int &result)
{

    if (r == NULL) {
        if (i > result) {
            result = i;
        }
         return result-1;
       
    }
    
    else {
       depth(r->left, (i+1) , result);
       depth(r->right, (i + 1) , result);
    }

}

int main()
{
    bst t;
    t.insert(5);
    t.insert(3);
    t.insert(2);
    t.insert(4);
    t.insert(1);
    t.insert(7);
    t.insert(6);
    t.insert(9);
    //t.insert(10);
    //t.insert(11);
    //t.insert(12);
    //t.insert(13);
    int n = 0;
    cout << t.depth(t.ro , 0 , 0, n);
   //cout << " height :\n" <<  t.height(t.ro);
    //t.search(1);
   // t.printtreeinorder();
    //t.printbfs(t.ro);
   // t.printtreeinorder();
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
