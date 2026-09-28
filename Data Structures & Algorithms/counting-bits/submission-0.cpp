class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> bits{};

        for (int i{}; i <= n; ++i) {
            int count = 0;
            int x = i;

            while (x) {
                x &= (x - 1);
                ++count;
            }

            bits.push_back(count);
        }

        return bits;
    }
};
