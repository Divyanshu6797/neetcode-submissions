class Solution {
public:
    bool checkAlphaNumeric(char ch) {
        if(ch >= 'a' && ch <= 'z') return true;
        if(ch >= 'A' && ch <= 'Z') return true;
        if(ch >= '0' && ch <= '9') return true;
        return false;
    }
    bool isPalindrome(string s) {
        int n = s.size();
        int i = 0;
        int j = n - 1;

        while(i < j) {
            while(i<j && !checkAlphaNumeric(s[i])) i++;
            while(i<j && !checkAlphaNumeric(s[j])) j--;
            if(tolower(s[i]) != tolower(s[j])) return false;
            i++;
            j--;

        }
        return true;
        
    }
};
