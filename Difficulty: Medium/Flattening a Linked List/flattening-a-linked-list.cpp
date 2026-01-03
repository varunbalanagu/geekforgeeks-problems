/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
*/

class Solution {
  public:
    Node *flatten(Node *root) {
        // code here
        Node *temp=root;
        Node *newhead=NULL;
        Node *newtail=NULL;
        vector<int>ans;
        while(temp!=0)
        {
            Node *temp2=temp;
            while(temp2!=0)
            {
               ans.push_back(temp2->data);
              temp2=temp2->bottom;
                
            }
            temp=temp->next;
          
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++)
        {
            Node *newnode=new Node(ans[i]);
            newnode->next = NULL;
            newnode->bottom = NULL;
            if(newhead==NULL)
            {
                newhead=newnode;
                newtail=newnode;
            }
            else
            {
                newtail->bottom=newnode;
                newtail=newnode;
            }
        }
        return newhead;
        
    }
};