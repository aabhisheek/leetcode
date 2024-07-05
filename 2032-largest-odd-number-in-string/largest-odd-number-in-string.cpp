class Solution {
public:
    string largestOddNumber(string num) {
         int i=num.size()-1;int d=0;int index=-1;
         while(i>=0)
         {
            d=num[i]-'0';
            if((d%2)!=0)
            {
             index=i;
             break;
            }
            i--;
         }
         
         
         return num.substr(0, index+1);
    }
};
