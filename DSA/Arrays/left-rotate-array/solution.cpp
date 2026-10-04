class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> temp;
        k = k % n;

        for(int i = 0; i < k; i++){
            temp.push_back(nums[i]);
        }

        for(int i = k; i < n; i++){
            nums[i-k] = nums[i];
        }

        for(int i = n - k; i < n; i++){
            nums[i] = temp[i - n + k];
        }
    }
};