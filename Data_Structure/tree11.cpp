//max path sum
#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;
};


int maxSum(node* root,int & maxi){
    if(root==NULL)
        return 0;

    int leftmaxpath = max(0,maxSum(root->left, maxi));
    int rightsumpath = max(0, maxSum(root->right, maxi));

    int val = root-> data;
    maxi = max(maxi,(leftmaxpath+rightsumpath)+val);
    return max(leftmaxpath, rightsumpath)+val;
}


int maxps(node* root){
    int maxi=INT_MIN;
    maxSum(root, maxi);
    return maxi;
}

node* newNode(int data){
    node* Node=new node();
    Node->data=data;
    Node->left=NULL;
    Node->right=NULL;

    return (Node);
}

int main(){
    node* root=newNode(-10);
    root->left=newNode(9);
    root->right=newNode(20);
    root->right->left=newNode(15);
    root->right->right=newNode(7);

    int answer=maxps(root);
    cout<<"maxSum :"<<answer;

    return 0;
}
