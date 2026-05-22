class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> myMap; 

        for (int i = 0; i < nums.size(); i++) {

            int num = nums[i];

            int complement = target - num;

            if (myMap.find(complement) != myMap.end()) {

                return {myMap[complement], i};
            }

            else {

                myMap[num] = i; 
            }

        }


        return {}; 
    
    }
    };