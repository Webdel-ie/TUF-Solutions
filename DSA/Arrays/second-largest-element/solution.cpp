class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        int largest = nums[0];
        int second_largest = INT_MIN;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > largest){
                second_largest = largest;
                largest = nums[i];
            }
            else if(nums[i] > second_largest && nums[i] < largest){
                second_largest = nums[i];
            }
        }
        if(second_largest == INT_MIN){
            return -1;
        }

        return second_largest;
    }
};