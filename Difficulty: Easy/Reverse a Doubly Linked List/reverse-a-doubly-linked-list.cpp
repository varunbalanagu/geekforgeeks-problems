/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        Node*temp=head;
        vector<int>ans;
        while(temp!=NULL)
        {
            ans.push_back(temp->data);
            temp=temp->next;
        }
        temp=head;
        int n=ans.size();
        for(int i=n-1;i>=0;i--)
        {
            temp->data=ans[i];
            temp=temp->next;
        }
        return head;
    }
};