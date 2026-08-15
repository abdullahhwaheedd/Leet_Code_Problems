class Solution {
public:
    int reverse(int x) {
        int revnum = 0;
        while (x != 0) {
            int rem = x % 10;
            x = x / 10;
            if ((revnum < INT_MIN / 10 || revnum > INT_MAX / 10)) {
                return 0;

            } else {
                revnum = (revnum * 10) + rem;
            }
        }

        return revnum;
    }
};