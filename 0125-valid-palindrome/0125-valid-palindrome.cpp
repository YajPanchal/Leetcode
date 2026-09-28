class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty()) return true;
        string check;
        for(int i = 0 ; i < s.length() ; i++){
            if(isalnum(s[i])){
                check+=tolower(s[i]);
            }
        }
        string original=check;
        int str=0;
        int end = check.length()-1;
        while(str<end){
            swap(check[str++],check[end--]);
        }
        if(original==check) return true;
        else return false;
    }
};