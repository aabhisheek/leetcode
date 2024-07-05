class Solution {
public:
    string largestOddNumber(string num) {
         int i=num.size()-1;int d=0;int index;
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
         int j=0;string str;
         while(j<=index)
         {
            str+=num[j];
            j++;
         }
         return str;
    }
};
