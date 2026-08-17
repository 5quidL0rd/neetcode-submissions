class Solution {
public:
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

    unordered_map<std::string, std::vector<std::string>> map;
    
    for (const string& s : strs) {
        string key = s;
        sort(key.begin(), key.end()); 
        map[key].push_back(s);             
    }
    
    vector<vector<string>> result;
    for (const auto& pair : map) {
        result.push_back(pair.second);
    }
    return result;
    }
};

