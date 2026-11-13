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
    void inorder(Node *r1,vector<int>&ans){
        if(r1==nullptr){
            return ;
        }
        inorder(r1->left,ans);
        ans.push_back(r1->data);
        inorder(r1->right,ans);
    }
    vector<int> findCommon(Node* r1, Node* r2) {
        // code here
        vector<int>ans;
        inorder(r1,ans);
        vector<int>sol;
        inorder(r2,sol);
        int m =-1;
        map<int,int>mp;
        map<int,int>mp2;
        for(int i =0 ; i <ans.size();i++){
            mp[ans[i]]++;
            m=max(m,ans[i]);
        }
        vector<int>res;
        for(int i =0 ; i <sol.size();i++){
            if(mp[sol[i]]>0)
             res.push_back(sol[i]);
          
        }
      
        return res;
    }
};