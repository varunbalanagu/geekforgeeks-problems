/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void binary(Node *root,vector<int>&ans,int *c)
    {
        if(root==NULL)
        {
            return;
        }
        (*c)++;
        binary(root->left,ans,c);
        ans.push_back(root->data);
        binary(root->right,ans,c);
    }
    int kthSmallest(Node *root, int k) {
        vector<int>ans;
        int c=0;
        binary(root,ans,&c);
        if(k-1>=c)
        {
            return -1;
        }
        return ans[k-1];
        // code here
        
    }
};