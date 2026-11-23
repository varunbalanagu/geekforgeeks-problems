class Solution {
  public:
    int exactlyK(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        int sum =0 , add=0;
        int low =0 ;
        map<int ,int>mp;
        map<int,int>mp2;
        for(int high =0 ; high  < n ; high ++){
            mp[arr[high]]++;
            while(mp.size() >=k+1){
                mp[arr[low]]--;
                if(mp[arr[low]]==0){
                    mp.erase(arr[low]);
                }
                low++;
            }
            sum+=high-low+1;
        }
        low =0;
        for(int high =0 ; high < n ; high++){
            mp2[arr[high]]++;
            while(mp2.size() >=k){
                mp2[arr[low]]--;
                if(mp2[arr[low]]==0){
                    mp2.erase(arr[low]);
                }
                low++;
            }
            add+=high-low+1;
        }
        return abs(add-sum);
    }
};