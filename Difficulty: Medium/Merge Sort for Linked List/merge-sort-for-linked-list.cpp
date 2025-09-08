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
    Node* mergeSort(Node* head) {
        // code here
        vector<int>ans;
        Node*temp=head;
        while(temp!=0)
        {
            ans.push_back(temp->data);
            temp=temp->next;
        }
        int n=ans.size();
        sort(ans.begin(),ans.end());
        temp=head;
        for(int i=0;i<n;i++)
        {
            temp->data=ans[i];
            temp=temp->next;
        }
        return head;
    }
};