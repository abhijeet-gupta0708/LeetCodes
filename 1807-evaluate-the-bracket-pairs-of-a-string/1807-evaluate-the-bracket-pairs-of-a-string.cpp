class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
    
        unordered_map<string, string> mp;
        for (const auto& pair : knowledge) {
            mp[pair[0]] = pair[1];
        }

        string ans = "";
        string key = "";
        bool inBracket = false;

        for (char c : s) {
            if (c == '(') {
                inBracket = true;
            } else if (c == ')') {
                inBracket = false;
                if (mp.count(key)) {
                    ans += mp[key];
                } else {
                    ans += "?";
                }
                key = ""; 
            } else {
                if (inBracket) {
                    key += c; 
                } else {
                    ans += c;  
                }
            }
        }

        return ans;
    }
};