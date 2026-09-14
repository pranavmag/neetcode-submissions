class Solution {
public:
    int maxArea(vector<int>& heights) {
        int leftPtr{};
        int rightPtr = heights.size() - 1;
        int max_water{};

        while (leftPtr < rightPtr) {
            int width = rightPtr - leftPtr;
            int height = min(heights[rightPtr], heights[leftPtr]);
            max_water = max(max_water, width * height);

            if (heights[leftPtr] <= heights[rightPtr]) {
                ++leftPtr;
            }
            else {
                --rightPtr;
            }
        }

        return max_water;
    }
};
