class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> check;
        unordered_map<char,char> rev;
        for(int i = 0 ; i < s.length() ; i++){
            if(check.find(s[i]) != check.end()){
                if(check.find(s[i])->second != t[i] && check[s[i]] != t[i]) return false;
            }
            else{
                check.emplace(s[i],t[i]);
            }
        }
        for(int i = 0 ; i < s.length() ; i++){
            if(rev.find(t[i]) != rev.end()){
                if(rev.find(t[i])->second != s[i] && rev[t[i]] != s[i]) return false;
            }
            else{
                rev.emplace(t[i],s[i]);
            }
        }
        return true;
    }
};