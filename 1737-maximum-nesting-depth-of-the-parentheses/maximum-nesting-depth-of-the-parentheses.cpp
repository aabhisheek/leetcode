class Solution {
public:
    int maxDepth(string s) {
        int count=0,cnt_max=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                 count++;
                 if(count>cnt_max)
                 cnt_max=count;
            }
            else if(s[i]==')')
            {
               count--;
            }
        }
        return cnt_max;
    }
};