class Solution {
  public:
    int getCount(string &s, int k) {
        // code here
       int n = s.size();
       map<char,int>mp;
       mp[s[0]]++;
       for(int i =1 ; i < n ; i++){
           if(s[i]!=s[i-1]){
               mp[s[i]]++;
           }
        //   cout<<mp[s[i]]<<endl;
         
       }
       int c=0;
       for(char i ='a'; i <='z'; i++){
           if(mp[i]==k){
               c++;
           }
       }
       return c;
    }
};