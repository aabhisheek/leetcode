class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> convert;
        convert['I']=1;
        convert['V']=5;
        convert['X']=10;
        convert['L']=50;
        convert['C']=100;
        convert['D']=500;
        convert['M']=1000;
        int ans = 0;
        int prev = INT_MAX;
        for(auto c:s){
            if(convert[c]>prev){
                ans+=convert[c]-2*prev; // 2* because we added it in the last iteration
            }
            else{
                ans+=convert[c];
            }
            prev = convert[c];
        }
        return ans;
    }
};