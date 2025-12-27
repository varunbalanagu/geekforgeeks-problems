class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        int n=arr.size();
        map<int,int>mp;
        int m=-1;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
            // m=max(arr[i],m);
        }
        int c=0;
        for(int i=1;i<=1000000;i++)
        {
            if(mp[i]==0)
            {
                c++;
                if(c==k)
                {
                    return i;
                }
            }
        }
        return -1;
        // code here
        
    }
};