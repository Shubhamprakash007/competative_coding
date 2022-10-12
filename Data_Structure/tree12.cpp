//is same tree
 //Definition for a binary tree node.


#include <bits/stdc++.h>
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;

 };
 

    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL || q==NULL)
            return (p==q);
        
         return isSameTree(p->left ,q->left) 
             && (p->val==q->val) 
             && isSameTree(p->right,q->right);   
    }
    
    TreeNode* newNode(int val){
        TreeNode* node=new TreeNode();
        node->val=val;
        node->left=NULL;
        node->right=NULL;
        return (node);
    }
    
    
    int main(){
        TreeNode* p=newNode(1);
        p->left=newNode(2);
        p->right=newNode(3);
        
        TreeNode* q=newNode(1);
        q->left=newNode(2);
        q->right=newNode(3);
        
        bool x=isSameTree(p,q);
        cout<<x<<" ";
    }  
    
