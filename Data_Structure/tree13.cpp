
//zigzagLevelOrder traversal
#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;

 };

vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root == NULL)
            return result;
        
        queue <TreeNode*> q;
        q.push(root);
        
        bool LeftToRight=true;
        
        while(!q.empty()){
            int size=q.size();
            vector<int> row(size);
            
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                
                int index=(LeftToRight)?i:(size-1-i);
                row[index]=node->val;
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }  
            }
            
            LeftToRight=!LeftToRight;
            result.push_back(row);     
        }
        return result;
    }
    
TreeNode* newNode(int val){
        TreeNode* node=new TreeNode();
        node->val=val;
        node->left=NULL;
        node->right=NULL;
        
        return (node);
    }
    
int main(){
        TreeNode* root=newNode(3);
        root->left=newNode(9);
        root->right=newNode(20);
        root->right->left=newNode(15);
        root->right->right=newNode(7);
        
        
        vector<vector<int>> ans= zigzagLevelOrder(root);
        for (int i = 0; i < ans.size(); i++) {
      for (int j = 0; j < ans[i].size(); j++) {
      cout << ans[i][j] << " ";
       }
        }
        
  return 0;    
    }   

