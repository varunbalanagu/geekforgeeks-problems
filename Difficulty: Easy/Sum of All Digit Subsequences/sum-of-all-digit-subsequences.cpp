class Solution {
  public:
    int subsequenceSum(string &s) {
     long long sum = 0;
           long long mod = 1e9 + 7;

           for(int i = 0; i < s.size(); i++) {
               sum = (sum + (s[i] - '0')) % mod;
           }

           long long power = 1;

           for(int i = 0; i < s.size() - 1; i++) {
               power = (power * 2) % mod;
           }

           return (sum * power) % mod;
       }  
        
    
};