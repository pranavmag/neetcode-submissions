class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // {"act", ["act", "cat"]}
        // we use "act" as the key assuming we sort the vector of strings so
        // it would show two instances of "act" in the vector.
        unordered_map<string, vector<string>> stringMap{};
        vector<vector<string>> anagramVec{};

        for (string s : strs) {
            string sSorted = s;
            sort(sSorted.begin(), sSorted.end());
            stringMap[sSorted].push_back(s);
        }

        for (auto &x : stringMap) {
            anagramVec.push_back(move(x.second));
        }

        return anagramVec;
    }
};
