/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        Node*newhead=NULL;
        Node*newtail=NULL;
        Node*temp=head;
        while(temp!=0)
        {
            if(temp->data==0)
            {
                Node*newnode=new Node(temp->data);
                if(newhead==NULL)
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
            temp=temp->next;
        }
        temp=head;
         while(temp!=0)
        {
            if(temp->data==1)
            {
                Node*newnode=new Node(temp->data);
                if(newhead==NULL)
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
            temp=temp->next;
        }
        temp=head;
         while(temp!=0)
        {
            if(temp->data==2)
            {
                Node*newnode=new Node(temp->data);
                if(newhead==NULL)
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
            temp=temp->next;
        }
        return newhead;
    }
};