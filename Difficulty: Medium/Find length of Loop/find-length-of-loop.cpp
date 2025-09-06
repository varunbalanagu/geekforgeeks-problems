/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
         if(head==NULL)
        return 0;
        else{
        Node* temp=head;
        Node* temp1=NULL;
        while(temp!=NULL)
        {
            if(temp->data==-1)
            {
                temp1=temp;
                break;
            }
            temp->data=-1;
            temp=temp->next;
        }
        if(temp1==NULL)
        return 0;
        temp=temp1;
        int c=1;
        while(temp!=NULL)
        {
            if(temp->next==temp1)
            {
                break;
            }
            c++;
            temp=temp->next;
            
        
        }
        return c;
        // code here
        
    }
    }
};