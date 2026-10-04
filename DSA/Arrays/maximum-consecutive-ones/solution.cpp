class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int temp = 0;
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                temp++;
                count = max(temp, count);
            }
            else{
                temp = 0;
            }
        }
        return count;
    }
};