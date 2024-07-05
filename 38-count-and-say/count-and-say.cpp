class Solution {
public:
    string countAndSay(int n) {
        string num = "1";
        while (--n > 0) {
            num = countAndSay(num);
        }
        return num;
    }

private:
    string countAndSay(const string& num) {
        ostringstream sb;
        int count, n = num.length();
        for (int i = 0, j = 0; i < n; i = j) {
            while (j < n && num[j] == num[i]) {
                j++;
            }
            sb << (j - i) << num[i];
        }
        return sb.str();
    }
};