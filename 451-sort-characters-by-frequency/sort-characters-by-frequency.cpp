class Solution {
public:
    string frequencySort(string s) {
        // Part-1
        map<char, int> mp;
        for(auto x: s)
            mp[x]++;

        // Part-2
        vector<pair<char, int>> freq;
        for (auto& it : mp) { freq.push_back(it); }
        
        // Part-3
        sort(freq.begin(), freq.end(), [](auto& a, auto& b) { 
        return a.second > b.second;
        });

        // Part-4
        string ans = "";
        for(int i=0; i<freq.size(); i++)
            for(int j=0; j<freq[i].second; j++)
                ans+=freq[i].first;
        
        return ans;
    }
};