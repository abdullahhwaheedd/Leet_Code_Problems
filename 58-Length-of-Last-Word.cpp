class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(), s.end());
        int i = 0;
        int count = 0;
        int count_spaces = 0;

        while (s[i] == ' ' && i < s.length()) {
            count_spaces++;
            i++;
        }
        i = count_spaces;

        while (i < s.length() && s[i] != ' ') {
            count++;
            i++;
        }

        return count;
    }
};