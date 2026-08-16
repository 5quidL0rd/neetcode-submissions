class Solution {
public:
    bool isAnagram(string s, string t) {
        
       if (s.length() != t.length()) {
        return false;
       }

        map <int, char> frequencyS;

        map <int, char> frequencyT;


        for (char sChar : s) {
            frequencyS[sChar]++;
        }


        for (char tChar: t) {

            frequencyT[tChar]++;
        }

        if (frequencyS != frequencyT) {

            return false;

        }


        return true; 

    }
};
