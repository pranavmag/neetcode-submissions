class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> value;

        for (int i{}; i < nums.size(); ++i) {
            
            int needed = target - nums[i];
            auto it = value.find(needed);

            if (it != value.end()) {
                return {it->second, i};
            }

            value[nums[i]] = i;
        }

        return {};
    }
};
