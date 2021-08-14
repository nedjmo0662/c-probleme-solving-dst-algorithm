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
    bstnode * root;
protected:
    bstnode* insert(bstnode* node  , int key );
    void printtreeinorder(bstnode* node);
    bstnode* search(bstnode* node , int key);
public:
    bst();

    void insert(int key);
    void printtreeinorder();
    bool search(int key);

};

bst::bst(){
    root = NULL;
    bst* tree = new bst;
}

bstnode * bst::insert(bstnode* node , int key){
    if(node == NULL)
    {
        node = new bstnode;
        node->key = key;
        node->left =  NULL;
        node->right  = NULL;
        node->parent  = NULL;
    }
    else if(node->key > key)
    {
        node->right = insert(node->right , key);
        node->right->parent = node;
    }
    else
    {
        node->left = insert(node->left , key);
        node->left->parent = node;
    }
    return node;
}

void bst::insert(int key)
{
    root = insert(root,key)
}

void bst::printtreeinorder(bstnode* node)
{
    if(node==NULL)
        return;
    printtreeinorder(node->left);

    std::cout << node->key << " ";

    printtreeinorder(node->right);
}
void bst::printtreeinorder()
{
    printteeorder(root);
    std::cout << std::endl;
}

bstnode* bst::search(bstnode* node , int key)
{
    if(node == NULL)
        return NULL;
    else if(node->key==key)
        return node;
    else if(node->key > key)
        return search(node->right , key);
    else
        return search(node->left , key);
}

bool bst::search(int  key)
{
    bstnode* result = search(root,key);
    return result==NULL?false:true;
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

    t.printtreeinorder();
    return 0;
}
