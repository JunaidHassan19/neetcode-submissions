class Solution {
   public:
    string encode(vector<string>& strs) {
        string result = "";
        for (string& s : strs) {
            result += to_string(s.size()) + "#" + s;
        }
        return result;
    }
    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while (i < (int)s.size()) {
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            int length = stoi(s.substr(i, j - i));
            int start = j + 1;
            string str = s.substr(start, length);
            result.push_back(str);
            i = start + length;
        }
        return result;
    }
};
