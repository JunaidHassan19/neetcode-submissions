class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int missing = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == missing){
                missing++;
            }
        }
        return missing;
    }
};
