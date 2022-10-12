//preorder traversal of tree
//root left right
#include<bits/stdc++.h>
using namespace std;

//type of each node
struct node{
    int data;
    struct node* right;
    struct node* left;
};

//traversal recursion method
void preOrderTrav(node* curr, vector<int> &preOrder){
    if(curr==NULL)
        return;
    preOrder.push_back(curr-> data);
    preOrderTrav(curr->left, preOrder);
    preOrderTrav(curr->right, preOrder);
}

//creation of tree method
struct node* newNode(int data){
    node* node=new struct node;
    node->data=data;
    node->left=NULL;
    node->right=NULL;

    return (node);
}

int main(){
    struct node* val=newNode(1);
    val-> left=newNode(2);
    val->right=newNode(3);
    val -> left -> left = newNode(4);
    val -> left -> right = newNode(5);
    val -> left -> right -> left = newNode(8);
    val -> right -> left = newNode(6);
    val -> right -> right = newNode(7);
    val -> right -> right -> left = newNode(9);
    val -> right -> right -> right = newNode(10);

    vector<int> preOrder;
    preOrderTrav(val, preOrder);

        cout << "The preOrder Traversal is :\n ";
        for (int i = 0; i < preOrder.size(); i++) {
            cout << preOrder[i] << " ";
        }
        return 0;
}
