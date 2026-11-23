class Solution {
  public:
    int countAtMostK(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        map<int,int>mp;
        int c=0,low=0;
        for(int high =0 ; high < n ; high++){
            mp[arr[high]]++;
            while(mp.size() >k){
                mp[arr[low]]--;
                if(mp[arr[low]]==0) mp.erase(arr[low]);
                low++;
            }
            c+=high-low+1;
            
        }
        return c;
    }
};