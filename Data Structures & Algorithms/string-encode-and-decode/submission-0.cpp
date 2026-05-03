class Solution {
   public:
    string encode(vector<string>& strs) {
        string str;
        for (const string& s : strs) {
            str.append(to_string(s.length()) + "#" + s);
        }
        return str;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int i = 0;

        while (i < s.size()) {
            int len = 0;
            while (s[i] != '#') {
                len = (len * 10) + (s[i] - '0');
                i++;
            }

            i++;
            strs.push_back(s.substr(i, len));

            i += len;
        }
        return strs;
    }
};
