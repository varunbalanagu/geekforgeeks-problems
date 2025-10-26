class Solution {
  public:
    vector<int> topKFreq(vector<int> &arr, int k) {
        // Code here
        map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        vector<pair<int, int>> vec(mp.begin(), mp.end());

    // Sort by frequency (descending)
    sort(vec.begin(), vec.end(), [](const pair<int,int>& a, const pair<int,int>& b){
        if (a.second == b.second)
        return a.first > b.first; 
        return a.second > b.second;  // descending order
    });
    vector<int>res;
    for(int i=0;i<k;i++)
    {
        res.push_back(vec[i].first);
    }
    
    return res;
    }
};
