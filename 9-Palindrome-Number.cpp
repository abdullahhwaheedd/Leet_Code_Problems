class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        if (x < 0) {
            return false;
        }
        int revnum = 0;
        while (x != 0) {
            int rem = x % 10;
            x = x / 10;
            if (revnum < INT_MIN / 10 || revnum > INT_MAX / 10) {
                return false;
            }

            revnum = (revnum * 10) + rem;
        }
        if (revnum == original) {
            return true;
        }

        return false;
    }
};