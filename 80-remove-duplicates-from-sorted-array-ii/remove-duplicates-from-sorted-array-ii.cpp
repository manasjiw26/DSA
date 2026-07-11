class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 1, charcount = 1,duplicates = 0;
        for (int i = 1; i < (nums.size()-duplicates); i++) {
            if (nums[i - 1] != nums[i]) {
                count = 1;
                charcount++;
            } else if (count < 2) {
                count++;
                charcount++;
            } else {
                int low = i;
                int high = nums.size() - 1;
                while (low < high) {
                    swap(nums[low], nums[low + 1]);
                    low++;
                }
                duplicates++;
                i--;
            }
        }
        return charcount;
    }
};