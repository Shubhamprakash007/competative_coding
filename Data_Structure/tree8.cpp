//maximum height of binary tree
#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;
};

int maxHeight(node* root){
    if(root==NULL)
        return -1;
    else{
        int lheight=maxHeight(root->left);
        int rheight=maxHeight(root->right);
        if(lheight>rheight)
            return (lheight+1);
        else return (rheight+1);
    }

}


node* newNode(int data){
    node* Node=new node();
    Node->data=data;
    Node->left=NULL;
    Node->right=NULL;

    return (Node);
}

int main()
{
    node *root = newNode(1);

    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout << "Height of tree is " << maxHeight(root);
    return 0;
}
