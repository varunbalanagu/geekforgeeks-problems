class Solution {
  public:
    bool canFormPalindrome(string &s) {
        // code here
        int n=s.size();
        map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        int c=0;
        for(char i='a';i<='z';i++)
        {
            if(mp[i]>0&&mp[i]%2!=0)
            {
                c++;
            }
        }
        if(n%2==0&&c!=0) return false;
        else if(n%2!=0&&c>1) return false;
        return true;
    }
};