class Solution {
public:
    int compress(vector<char>& chars) {

        if (chars.size() == 1) {
            return 1;
        }

        int idx = 0;
        for (int i = 0; i < chars.size();) {
            char ch = chars[i];
            int count = 0;
            while (i < chars.size() && chars[i] == ch) {
                count++;
                i++;
            }
            if (count == 1) {
                chars[idx] = ch;
                idx++;
            } else {
                chars[idx] = ch;
                idx++;
                string str = to_string(count);
                for (char digits : str) {
                    chars[idx++] = digits;
                }
            }
        }
        chars.resize(idx);
        return idx;
    }
};