class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length{};
        unordered_map<char, int> stringMap;
        int max_length{};

        for (char c : s) {
            auto it = stringMap.find(c);
            if (it != stringMap.end()) {
                max_length = max(max_length, length);
                length = 0;
                stringMap.clear();
            }

            ++length;
            stringMap[c] = 1;
        }

        return max_length;
    }
};
