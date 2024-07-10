class Solution {
public:
   int strStr(string text, string pat) {
        // Code here
        int m = text.length();
        int n = pat.length();
        for(int i=0;i<=m-n;i++){
            for(int j=0;j<n;j++){
                if(text[i+j]!=pat[j])
                {
                    break;
                }
                if(j==(n-1))
                {
                    return i;
                }
            }
        }
        return -1;
    }
    
};