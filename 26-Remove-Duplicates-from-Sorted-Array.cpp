class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       
        int change = 1;
        int current = 0;

        while (change < nums.size()) {
            if (nums[current] == nums[change]) {
                change++;
            } else {
                current++;
                nums[current] = nums[change];
            
            }
        }
        int total = current + 1;
        return total;
       
    }
    
};