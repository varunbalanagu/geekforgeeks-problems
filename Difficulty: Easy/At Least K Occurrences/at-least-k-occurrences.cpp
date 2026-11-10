class Solution {
  public:
    int firstElementKTime(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        map<int,int>mp;
        int m =-1;
        for(int i =0 ; i < n ; i++){
            mp[arr[i]]++;
            if(mp[arr[i]]==k) return arr[i];
            // m=max(m,arr[i]);
        }
        return -1;
        
    }
};