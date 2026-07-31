class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int start = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[start] = nums[i];
                start++;
                count++;
            }
        }
        start = count;
        for (int i = count; i < nums.size(); i++) {

            nums[start] = 0;
            start++;
        }
    }
};