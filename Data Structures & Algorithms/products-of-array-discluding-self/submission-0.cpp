class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int count = 1;
        int zero_count = 0;
        std::vector<int> product{};

        for (int num : nums) {
            if (num == 0) {
                ++zero_count;
                continue;
            }

            count *= num;
        }

        for (int num : nums) {
            if (zero_count > 1) {
                product.push_back(0);
            }
            else if (zero_count == 1) {
                if (num == 0) {
                    product.push_back(count);
                }
                else {
                    product.push_back(0);
                }
            }
            else {
                product.push_back(count / num);
            }
        }

        return product;
    }
};
