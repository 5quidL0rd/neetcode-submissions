class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        map<int, int> frequency; 

        /*loop through and put the array into the unordered map for fast access time
        plus we also are able to count the frequency of each number so we can answer
        the k question */

        for (int val : nums) {

           frequency[val]++; 

            
        }


        vector<pair<int, int>> myVec(frequency.begin(), frequency.end());

        vector<int> res; 


        sort(myVec.begin(), myVec.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        }); 

        //Now to get most frequent in frequency counter k times 

        for (int i = 0; i < k; i++) {
         res.push_back(myVec[i].first);
        }

        return res; 
    }
};
