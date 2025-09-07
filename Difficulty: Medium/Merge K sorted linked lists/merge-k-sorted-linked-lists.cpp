/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* mergeKLists(vector<Node*>& arr) {
        // code here
        vector<int>ans;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            Node*temp=arr[i];
            while(temp!=0)
            {
                ans.push_back(temp->data);
                temp=temp->next;
            }
        }
        sort(ans.begin(),ans.end());
        Node*newhead=nullptr;
        Node*newtail=nullptr;
        for(int i=0;i<ans.size();i++)
        {
            Node*newnode=new Node(ans[i]);
            newnode->data=ans[i];
            if(newhead==nullptr)
            {
                newhead=newnode;
                newtail=newnode;
            }
            else
            {
                newtail->next=newnode;
                newtail=newtail->next;
            }
            
        }
        return newhead;
    }
};