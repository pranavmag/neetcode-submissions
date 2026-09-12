class Solution {
public:
    bool isPalindrome(string s) {
        int leftPtr{};
        int rightPtr = s.length() - 1;

        while (leftPtr <= rightPtr) {
            if (!isalnum(s[leftPtr]) || isspace(s[leftPtr])) {
                ++leftPtr;
                continue;
            }
            else if (!isalnum(s[rightPtr]) || isspace(s[rightPtr])) {
                --rightPtr;
                continue;
            }

            if (tolower(s[leftPtr]) == tolower(s[rightPtr])) {
                ++leftPtr;
                --rightPtr;
            }
            else {
                return false;
            }
        }

        return true;
    }
};
