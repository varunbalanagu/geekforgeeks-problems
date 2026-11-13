/* Structure of a Binary Search Tree node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    void inorder(Node *root,vector<int>&ans){
        if(root==nullptr){
            return;
        }
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
    int minDiff(Node *root, int k) {
        // code here
        vector<int>ans;
        inorder(root,ans);
        int m =INT_MAX;
        for(int i =0 ; i < ans.size() ; i++){
            m=min(m,abs(ans[i]-k));
        }
        return m;
        
    }
};
