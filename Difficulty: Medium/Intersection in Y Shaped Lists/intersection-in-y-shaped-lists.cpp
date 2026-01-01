/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        //  Code Here
        if(head1->next==nullptr)
        {
            return head1;
        }
        Node*temp1=head1;
        Node*temp2=head1->next;
        // vector<int>ans;
        
        while(temp2!=NULL)
        {
            temp1->next=nullptr;
            temp1=temp2;
            temp2=temp2->next;
        }
        temp2=head2;
        while(temp2!=NULL)
        {
            if(temp2->next==nullptr)
            {
                return temp2;
            }
            temp2=temp2->next;
        }
        return nullptr;
    }
};