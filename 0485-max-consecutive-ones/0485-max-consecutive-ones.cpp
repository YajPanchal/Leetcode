class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int end = nums.size()-1;
        int cnt=0,max=0;
        for(int i = 0 ; i <= end ; i++){
            if(nums[i] == 1){ 
                cnt++;
                if(max < cnt) max=cnt;
            }
            else cnt=0;
        }
        return max;
    }
};