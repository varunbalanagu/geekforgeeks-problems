class Solution {
  public:
    vector<int> countVowels(string &s, vector<vector<int>> &queries) {
        // code here
        int n = s.size();
        int m = queries.size();
        vector<int>prefix(n,0);
        if(s[0]=='a'|| s[0]=='e'|| s[0]=='i'|| s[0]=='o'|| s[0]=='u')
        prefix[0]=1;
        for(int i =1 ; i < n ; i++){
            prefix[i]+=prefix[i-1];
            if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            prefix[i]=prefix[i-1]+1;
        }
        vector<int>ans;
        for(int i =0 ; i < m ; i++){
            int l = queries[i][0];
            int r = queries[i][1];
            if(l==0)
            ans.push_back(prefix[r]);
            else
            ans.push_back(prefix[r]-prefix[l-1]);
        }
        return ans;
    }
};