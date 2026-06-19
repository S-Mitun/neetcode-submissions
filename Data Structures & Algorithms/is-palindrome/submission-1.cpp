class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
        for(char c: s){
            if(isalnum(c)){
                s1+=tolower(c);
            }
        }
        return s1==string(s1.rbegin(),s1.rend());
    }
};
