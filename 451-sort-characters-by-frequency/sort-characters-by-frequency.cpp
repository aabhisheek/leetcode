class Solution {
public:
    string frequencySort(string s) {
        int n=s.length();
        string ans;
        map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        vector<vector<int>>v;
        for(auto &i:mp){
            v.push_back({i.second,i.first-'a'});
        }
        sort(v.rbegin(),v.rend());
        for(int i=0;i<v.size();i++){
            while(v[i][0]--)
            ans+=v[i][1]+'a';
        }
        return ans;
    }
};