class Solution {
public:
    void reverseString(vector<char>& s) {
        // vector<char> ans;
        int j=s.size()-1;
        for(int i = j ; i > j/2 ; i--){
            swap(s[i],s[s.size()-1-i]);
        }
        for(int i = s.size()-1 ; i >= 0 ; i--){
            if(i==s.size()-1){
                cout<<"["<<"\""<<s[i]<<"\",";
            }
            else if(i==0) cout<<"\""<<s[i]<<"\""<<"]";
            else{
                cout<<"\""<<s[i]<<"\""<<",";
            }
        }
    }
};