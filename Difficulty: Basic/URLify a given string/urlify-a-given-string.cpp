class Solution {
  public:
    string URLify(string &s) {
        // code here
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                s[i]='%';
                 s.insert(i+1,"20");
            }
        }
        // for(int i=0;i<s.size();i++)
        // {
        //     if(s[i]=='%')
        //     {
               
        //     }
        // }
        return s;
    }
};