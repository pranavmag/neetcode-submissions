class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> countMap{};

        for (int x : nums) {
            ++countMap[x];
        }

        vector<pair<int, int>> mostFreq{};

        for (const auto& x : countMap) {
            mostFreq.emplace_back(x.second, x.first);
        }

        sort(mostFreq.rbegin(), mostFreq.rend());

        vector<int> result{};

        for (int i{}; i < k; ++i) {
            result.push_back(mostFreq[i].second);
        }

        return result;
    }
};
