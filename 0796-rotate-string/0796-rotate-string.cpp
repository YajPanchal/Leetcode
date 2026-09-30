class Solution {
public:
    bool rotateString(string s, string goal) {
        //comparing lengths
        if(s.length() != goal.length()) return false;

        //iterating form o to size of string
        for(int i = 0 ; i < s.length() ; i++){
            char c=s[0];
            s.erase(0,1);
            s.insert(s.length(),1,c);
            if( s == goal ) return true;
        }
        return false;
    }
};