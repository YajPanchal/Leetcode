class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string ans=strs[0];
       for(int i = 1 ; i < strs.size() ; i++){
            string common = "";
            for(int j = 0 ; j < ans.length() ; j++){
                if(strs[i][j] == ans[j]){
                    common += ans[j];
                }
                else break;
            }
            if(common == "") return common;
            ans=common;
       }
       return ans;
    }
};