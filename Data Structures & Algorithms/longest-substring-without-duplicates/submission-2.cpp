class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;
        int leftPtr{};
        int result{};

        for (int i{}; i < s.length(); ++i) {
            while (charSet.count(s[i])) {
                charSet.erase(s[leftPtr]);
                ++leftPtr;
            }

            charSet.insert(s[i]);
            result = max(result, i - leftPtr + 1);
        }

        return result;
    }
};
