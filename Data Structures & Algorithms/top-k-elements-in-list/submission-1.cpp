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

        //Frequency is not ordered so put into vector and order that
        vector<pair<int, int>> myVec(frequency.begin(), frequency.end());

        vector<int> res; 


        sort(myVec.begin(), myVec.end(), [](const auto& a, const auto& b) {
            return a.second > b.second; //if a is greater put it first
        }); 

        //Now to get most frequent in frequency counter k times 

        for (int i = 0; i < k; i++) {
         res.push_back(myVec[i].first);
        }

        return res; 
    }
};




//One can also put into a min-heap, pop lowest one if full by capping it at k amount of elements in the heap, same way of determining frequency map just stick into a heap then print it out


