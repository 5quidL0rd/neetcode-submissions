class Solution {
public:
    
    bool hasDuplicate(vector<int> nums) {

        //If we order it we can check whether partner is same number or not 

        sort(nums.begin(), nums.end());

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] == nums[i - 1]) {
                return true;
            }
        }

        return false; 
    }
};