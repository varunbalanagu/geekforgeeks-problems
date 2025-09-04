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
    Node *reverseKGroup(Node *head, int k) {
        // code here
          Node* temp = head;
        vector<int> ans;

      
        while (temp != nullptr) {
            ans.push_back(temp->data);
            temp = temp->next;
        }

        int n = ans.size();

       
        for (int i = 0; i + k <= n; i += k) {
            for (int j = 0; j < k / 2; j++) {
                swap(ans[i + j], ans[i + k - 1 - j]);
            }
        }
          if (n % k != 0) {
            int rem = n % k;
            int start = n - rem, end = n - 1;
            while (start < end) {
                swap(ans[start], ans[end]);
                start++;
                end--;
            }
        }

        
        temp = head;
        for (int i = 0; i < n; i++) {
            temp->data = ans[i];
            temp = temp->next;
        }

        return head;
    }
};