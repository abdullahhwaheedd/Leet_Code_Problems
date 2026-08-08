class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if (s1.length() != s2.length()) {
            return false;
        } else if (s1 == s2) {
            return true;
        }
        int count = 0;
        int count2 = 0;
        int freq = 0;

        for (int i = 0; i < s1.length(); i++) {
            if (s1[i] != s2[i]) {
                if (count == 0) {
                    count = i;
                    freq++;
                } else if (count2 == 0) {
                    count2 = i;
                    break;
                }
            }
        }
        swap(s1[count2], s1[count]);

        if (freq > 2 || s1 != s2) {
            return false;
        }

        return true;
    }
};