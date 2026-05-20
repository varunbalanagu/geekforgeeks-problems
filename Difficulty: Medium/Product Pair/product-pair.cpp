class Solution {
public:
    bool isProduct(vector<int>& arr, long long target) {
        int n = arr.size();

        map<long long,int> mp;

        for(int i=0;i<n;i++)
            mp[arr[i]]++;

        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                if(target==0 && n>1)
                    return true;

                continue;
            }

            if(target % arr[i] != 0)
                continue;

            long long x = target / arr[i];

            if(x==arr[i])
            {
                if(mp[arr[i]]>1)
                    return true;
            }
            else if(mp[x]>0)
            {
                return true;
            }
        }

        return false;
    }
};