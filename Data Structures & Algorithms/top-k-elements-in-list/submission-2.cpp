class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> frequency; 

        /*loop through and put the array into the unordered map for fast access time
        plus we also are able to count the frequency of each number so we can answer
        the k question */

        for (int val : nums) {

           frequency[val]++; 

            
        }

        //Frequency is not ordered so put into vector and order that
            std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq; 

        vector<int> res; 


        for (const auto& pair : frequency) {

            pq.push({pair.second, pair.first});

            if (pq.size() > k) {
                pq.pop(); 
            }

      
        }

        //Now to get most frequent in frequency counter k times 

        while (!pq.empty()) {

            res.push_back(pq.top().second);

            pq.pop(); 
        }


        return res; 
    }
};




//One can also put into a min-heap, pop lowest one if full by capping it at k amount of elements in the heap, same way of determining frequency map just stick into a heap then print it out


