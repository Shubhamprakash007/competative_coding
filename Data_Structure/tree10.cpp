//diameter of binary tree
#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;
};


int diaMeter(node* root, int* height){
    int lh=0,rh=0,ld=0,rd=0;
    if(root == NULL){
        *height=0;
        return 0;
    }


    ld= diaMeter(root->left, &lh);
    rd= diaMeter(root->right, &rh);

    *height= max(lh,rh)+1;
    return max(lh+rh+1,max(ld,rd));
}

node* newNode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;

    return (Node);
}

int main()
{

    /* Constructed binary tree is
            1
            / \
        2     3
        / \
    4     5
    */
    node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    int height = 0;
    // Function Call
    cout << "Diameter of the given binary tree is " << diaMeter(root, &height);

    return 0;
}
