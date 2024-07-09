class Solution {
public:
    int minAddToMakeValid(string s) {
          int open=0,close=0;
          for(int i=0;i<s.size();i++)
          {
            if(s[i]==')')
            {
                if(open>0)  open--;
                else        close++;
            }
            else
            open++;
          }
          return (close+open);
    }
};