class Solution {
  public:
    void sortStack(stack<int> &s) {
        // code here
        int n=s.size();
        vector<int>ans;
        while(!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }
        sort(ans.begin(),ans.end(),greater<int>());
        while(!s.empty())
        {
            s.pop();
        }
        for(int i=ans.size()-1;i>=0;i--)
        {
            s.push(ans[i]);
        }
    }
};
