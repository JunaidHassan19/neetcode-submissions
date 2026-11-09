class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        int st = 0;
        int end = n-1;

        while(st < end) {
            if(!isalnum(s[st])) {
                st++;
                continue;
            }
            if(!isalnum(s[end])){
                end--;
                continue;
            }

            if(tolower(s[st]) != tolower(s[end])) {
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};
